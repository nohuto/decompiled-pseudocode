/*
 * XREFs of RtlDispatchException @ 0x14027C1C0
 * Callers:
 *     KiDispatchException @ 0x1403E8310 (KiDispatchException.c)
 *     RtlRaiseNoncontinuableException @ 0x1404FD070 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseException @ 0x1405E88F0 (RtlRaiseException.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140259BD0 (KeQueryCurrentStackInformationEx.c)
 *     RtlpCopyContext @ 0x14027BAE0 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x14027D3A0 (RtlLookupFunctionEntry.c)
 *     RtlpxVirtualUnwind @ 0x14027F030 (RtlpxVirtualUnwind.c)
 *     RtlInitializeExtendedContext2 @ 0x14027FCB0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14027FF40 (RtlGetExtendedContextLength2.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     RtlpIsFrameInBounds @ 0x14042CFE0 (RtlpIsFrameInBounds.c)
 *     RtlpGetStackLimitsEx @ 0x140456330 (RtlpGetStackLimitsEx.c)
 *     RtlVirtualUnwind @ 0x140471220 (RtlVirtualUnwind.c)
 *     RtlpLogExceptionDispatch @ 0x1405E7008 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1405E71C0 (RtlpLogExceptionHandler.c)
 *     RtlLookupExceptionHandler @ 0x1405E8838 (RtlLookupExceptionHandler.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x1406B42C0 (RtlpExecuteHandlerForException.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall RtlDispatchException(ULONG_PTR a1, __int64 a2)
{
  ULONG_PTR v3; // r14
  unsigned __int8 v4; // r12
  int v5; // esi
  ULONG_PTR v6; // rcx
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  void *v9; // rsp
  __int64 v10; // r15
  _DWORD *v11; // rax
  int v12; // r12d
  ULONG_PTR v13; // rbx
  __int64 v14; // r9
  ULONG_PTR v15; // rax
  __int64 v16; // r14
  ULONG_PTR v17; // rdx
  ULONG_PTR v18; // rbx
  int v19; // edx
  int v20; // ecx
  ULONG_PTR v21; // rcx
  int v23; // edx
  char v24; // al
  char v25; // r14
  bool v26; // zf
  __int64 v27; // rax
  int v28; // edx
  int v29; // r9d
  int v30; // r10d
  __int64 v31; // rax
  int v32; // r9d
  ULONG_PTR v33; // r14
  char IsFrameInBounds; // al
  _BYTE v35[4]; // [rsp+60h] [rbp+0h] BYREF
  int v36; // [rsp+64h] [rbp+4h] BYREF
  char v37; // [rsp+68h] [rbp+8h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+10h] BYREF
  ULONG_PTR v39; // [rsp+78h] [rbp+18h] BYREF
  char *v40; // [rsp+80h] [rbp+20h] BYREF
  _DWORD *v41; // [rsp+88h] [rbp+28h] BYREF
  __int64 v42; // [rsp+90h] [rbp+30h] BYREF
  __int64 v43; // [rsp+98h] [rbp+38h] BYREF
  ULONG_PTR v44; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR v45; // [rsp+A8h] [rbp+48h]
  ULONG_PTR v46; // [rsp+B0h] [rbp+50h]
  __int64 v47; // [rsp+B8h] [rbp+58h] BYREF
  __int64 v48; // [rsp+C0h] [rbp+60h] BYREF
  __int64 v49; // [rsp+C8h] [rbp+68h]
  __int64 v50; // [rsp+D0h] [rbp+70h]
  ULONG_PTR v51; // [rsp+D8h] [rbp+78h]
  _BYTE *v52; // [rsp+E8h] [rbp+88h]
  __int64 v53; // [rsp+F0h] [rbp+90h]
  ULONG_PTR v54; // [rsp+F8h] [rbp+98h]
  _DWORD *v55; // [rsp+100h] [rbp+A0h]
  int v56; // [rsp+108h] [rbp+A8h]
  __int128 v57; // [rsp+110h] [rbp+B0h] BYREF
  __int64 v58; // [rsp+120h] [rbp+C0h]
  _DWORD v59[2]; // [rsp+130h] [rbp+D0h] BYREF
  __int64 v60; // [rsp+138h] [rbp+D8h]
  __int64 v61; // [rsp+140h] [rbp+E0h]
  char v62[16]; // [rsp+148h] [rbp+E8h] BYREF
  __int64 v63; // [rsp+158h] [rbp+F8h]

  v46 = a1;
  LODWORD(v41) = 0;
  v3 = a1;
  v4 = 0;
  memset_0(&v48, 0, 0x50uLL);
  v37 = 0;
  BugCheckParameter1 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v39 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v36 = 0;
  memset_0(v62, 0, 0xC0uLL);
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v37 = 1;
    RtlpLogExceptionDispatch(v3, a2);
  }
  v5 = *(_DWORD *)(v3 + 4) & 0x81;
  KeQueryCurrentStackInformationEx(*(_QWORD *)(a2 + 152), &v36, &v40, &v39);
  v6 = *(_QWORD *)(a2 + 152);
  v36 = v36 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimitsEx(v6, v3) )
  {
    v5 |= 8u;
    goto LABEL_35;
  }
  v7 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
    v7 = 1048715;
  RtlGetExtendedContextLength2(v7, &v41, 0LL);
  v8 = (unsigned int)v41 + 15LL;
  if ( v8 <= (unsigned int)v41 )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2(v35, v7, &v47, 0LL);
  RtlpCopyContext((__int64)v35, a2);
  v10 = *(_QWORD *)(a2 + 248);
  v11 = v59;
  v12 = 0;
  v41 = v59;
  v45 = 0LL;
  v59[0] = 0;
  v61 = 0LL;
  v59[1] = 0x1000000;
  v60 = -1LL;
  while ( 1 )
  {
    v47 = RtlLookupFunctionEntry(v10, &v42, v11);
    v58 = 0LL;
    v57 = 0LL;
    if ( (int)RtlpxVirtualUnwind(
                1,
                v42,
                v10,
                v47,
                (__int64)v35,
                0LL,
                (__int64)&v44,
                (__int64)&BugCheckParameter1,
                (__int64)&v43,
                (__int64)&v57) < 0 )
      goto LABEL_18;
    v13 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 < (unsigned __int64)v40 || BugCheckParameter1 >= v39 )
    {
      if ( (_BYTE)v36 == 1 )
      {
        LOBYTE(v36) = 2;
        RtlpGetStackLimitsEx(BugCheckParameter1, v3);
        v13 = BugCheckParameter1;
      }
      else if ( !(_BYTE)v36 )
      {
        v5 |= 8u;
LABEL_18:
        v4 = 0;
LABEL_35:
        *(_DWORD *)(v3 + 4) = v5;
        return v4;
      }
    }
    if ( v43 )
      break;
LABEL_14:
    v10 = v63;
    if ( (v54 & 7) == 0 && v54 >= (unsigned __int64)v40 )
    {
      v11 = v41;
      if ( v54 < v39 )
        continue;
    }
    if ( (_BYTE)v36 != 1 )
      goto LABEL_18;
    LOBYTE(v36) = 0;
    if ( !(unsigned __int8)RtlpGetStackLimitsEx(v54, v3) )
      goto LABEL_18;
    v11 = v41;
  }
  while ( 1 )
  {
    v14 = v43;
    v49 = v42;
    v50 = v47;
    v15 = v44;
    *(_DWORD *)(v3 + 4) = v5;
    v16 = 0LL;
    v54 = v15;
    v55 = v41;
    v35[0] = 0;
    v48 = v10;
    v51 = v13;
    v52 = v35;
    v53 = v14;
    v56 = v12;
    if ( v37 )
    {
      v27 = RtlpLogExceptionHandler(v46, v35, v10);
      v13 = BugCheckParameter1;
      v16 = v27;
    }
    v17 = v13;
    v18 = v46;
    v19 = RtlpExecuteHandlerForException(v46, v17, a2, &v48);
    if ( v16 )
      *(_DWORD *)(v16 + 1396) = v19;
    v20 = *(_DWORD *)(v18 + 4);
    v13 = BugCheckParameter1;
    v5 |= v20 & 1;
    v21 = v45;
    if ( v45 == BugCheckParameter1 )
    {
      v5 &= ~0x10u;
      v21 = 0LL;
      v45 = 0LL;
    }
    if ( !v19 )
      break;
    v23 = v19 - 1;
    if ( !v23 )
      goto LABEL_30;
    v28 = v23 - 1;
    if ( !v28 )
    {
      v33 = v51;
      v5 |= 0x10u;
      IsFrameInBounds = 1;
      if ( (_BYTE)v36 )
      {
        IsFrameInBounds = RtlpIsFrameInBounds(&v40, v51, &v39);
        v21 = v45;
      }
      if ( v33 > v21 || !IsFrameInBounds )
        v45 = v33;
LABEL_30:
      v24 = v36;
      v25 = v35[0];
      goto LABEL_31;
    }
    if ( v28 != 1 )
      RtlRaiseStatus(3221225510LL);
    v10 = v48;
    v42 = v49;
    RtlpCopyContext((__int64)v35, (__int64)v52);
    v43 = RtlVirtualUnwind(1, v30, v10, v29, (__int64)v35, (__int64)&v44, (__int64)&BugCheckParameter1, 0LL);
    BugCheckParameter1 = v51;
    v31 = RtlLookupFunctionEntry(v10, &v42, v41);
    v47 = v31;
    if ( v31 != v50
      || (int)RtlLookupExceptionHandler(v31, v42, 2, v32, (__int64)&v43, (__int64)&v44) < 0
      || v43 != v53
      || v44 != v54 )
    {
      __fastfail(0x27u);
    }
    v13 = BugCheckParameter1;
    v12 = v56;
    v41 = v55;
    v25 = 1;
    v26 = (unsigned __int8)RtlpIsFrameInBounds(&v40, BugCheckParameter1, &v39) == 0;
    v24 = v36;
    if ( v26 && (_BYTE)v36 == 1 )
    {
      RtlpGetStackLimitsEx(v13, v46);
      v13 = BugCheckParameter1;
LABEL_42:
      LOBYTE(v36) = 0;
      goto LABEL_32;
    }
LABEL_31:
    if ( v24 == 2 )
      goto LABEL_42;
LABEL_32:
    v26 = v25 == 0;
    v3 = v46;
    if ( v26 )
    {
      v12 = 0;
      goto LABEL_14;
    }
  }
  if ( (v5 & 1) != 0 )
    RtlRaiseStatus(3221225509LL);
  return 1;
}
