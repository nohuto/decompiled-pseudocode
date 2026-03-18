/*
 * XREFs of LinkNodepRunSrsWorker @ 0x140070260
 * Callers:
 *     LinkNodepRunSrsAsync @ 0x140055B10 (LinkNodepRunSrsAsync.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_q @ 0x1400232C0 (WPP_RECORDER_SF_q.c)
 *     _ACPIInternalError @ 0x14004C514 (_ACPIInternalError.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall LinkNodepRunSrsWorker(__int64 a1, int a2, __int64 a3, __int64 **a4)
{
  int v5; // edi
  char v6; // r15
  int v7; // ecx
  int v8; // ecx
  __int64 *v9; // rcx
  int v10; // eax
  __int64 *v11; // rax
  __int64 *v12; // r8
  char v13; // r9
  __int64 *v14; // r13
  char v15; // r12
  unsigned __int16 v16; // si
  int v17; // ebp
  char v18; // cl
  unsigned __int16 v19; // dx
  unsigned int v20; // ebp
  __int64 *Pool2; // rax
  __int64 **v22; // rdi
  __int64 *v23; // rdx
  __int64 *v24; // rdx
  __int64 *v25; // rax
  char v26; // cl
  __int64 *v27; // rsi
  __int64 *v28; // rcx
  __int64 v30; // [rsp+90h] [rbp+8h]
  char v31; // [rsp+98h] [rbp+10h]

  v30 = a1;
  v5 = a2;
  v6 = 0;
  if ( a2 < 0 )
  {
LABEL_44:
    if ( *((_DWORD *)a4 + 9) )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *))a4[10])(a1, (unsigned int)v5, 0LL, a4[11]);
    ExFreePoolWithTag(a4, 0);
    return (unsigned int)v5;
  }
  _InterlockedAdd((volatile signed __int32 *)a4 + 9, 1u);
  v7 = *((_DWORD *)a4 + 8);
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        ACPIInternalError(0x508EDuLL);
LABEL_42:
      ExFreePoolWithTag(a4[3], 0);
      v5 = 0;
LABEL_43:
      a1 = v30;
      goto LABEL_44;
    }
  }
  else
  {
    v9 = *a4;
    *((_DWORD *)a4 + 8) = 1;
    v10 = ACPIGet(
            (__int64)v9,
            1397903455,
            738263048,
            0LL,
            0,
            (__int64)LinkNodepRunSrsWorker,
            (__int64)a4,
            (__int64)(a4 + 2),
            0LL);
    v5 = v10;
    if ( v10 == 259 )
      return 259LL;
    if ( v10 < 0 )
      goto LABEL_43;
  }
  v11 = a4[2];
  *((_DWORD *)a4 + 8) = 2;
  if ( !v11 )
  {
    v5 = -1073741772;
    goto LABEL_43;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0xDu,
      (__int64)&WPP_27c747d966ad35cece80159593e08d4b_Traceguids,
      v11);
  v12 = a4[2];
  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  v31 = 0;
  v17 = 0;
  while ( 1 )
  {
    v18 = *(_BYTE *)v12;
    if ( !*(_BYTE *)v12 )
      break;
    if ( *(char *)v12 < 0 )
    {
      v19 = *(_WORD *)((char *)v12 + 1) + 3;
    }
    else
    {
      v19 = (v18 & 7) + 1;
      v18 &= 0x78u;
    }
    switch ( v18 )
    {
      case 120:
        v17 += v19;
        if ( v19 > 1u )
          v15 = 1;
        goto LABEL_26;
      case 32:
        v16 = v19;
        break;
      case -119:
        v16 = 9;
        v31 = 1;
        break;
      default:
        goto LABEL_23;
    }
    v14 = v12;
    v17 += v16;
    v13 = 1;
LABEL_23:
    v12 = (__int64 *)((char *)v12 + v19);
  }
LABEL_26:
  if ( !v13 )
  {
    ExFreePoolWithTag(a4[2], 0);
    v5 = -1073741275;
    goto LABEL_43;
  }
  v20 = v17 + 1;
  Pool2 = (__int64 *)ExAllocatePool2(64LL, v20, 1097884481LL);
  v22 = a4 + 3;
  a4[3] = Pool2;
  if ( !Pool2 )
  {
    ExFreePoolWithTag(a4[2], 0);
    v5 = -1073741670;
    goto LABEL_43;
  }
  memmove(Pool2, v14, v16);
  ExFreePoolWithTag(a4[2], 0);
  v23 = *v22;
  if ( v31 )
  {
    *((_BYTE *)v23 + 4) = 1;
    *(_WORD *)((char *)v23 + 1) = v16 - 3;
    *(_DWORD *)((char *)v23 + 5) = *((_DWORD *)a4 + 2);
  }
  else
  {
    *(_WORD *)((char *)v23 + 1) = 1 << *((_DWORD *)a4 + 2);
  }
  v24 = *v22;
  *((_BYTE *)*v22 + v16) = 120;
  if ( v15 )
  {
    *((_BYTE *)v24 + v16) = 121;
    v25 = *v22;
    v26 = *(_BYTE *)*v22;
    if ( v26 != 121 )
    {
      do
      {
        v25 = (__int64 *)((char *)v25 + 1);
        v6 = v26;
        v26 = *(_BYTE *)v25;
      }
      while ( *(_BYTE *)v25 != 121 );
      v22 = a4 + 3;
    }
    *((_BYTE *)v24 + v16 + 1) = -v6;
  }
  v27 = AMLIGetNamedChild(*a4, 1397904223);
  if ( !v27 )
  {
    v28 = *v22;
    v5 = -1073741772;
    ExFreePoolWithTag(v28, 0);
    goto LABEL_43;
  }
  a4[9] = *v22;
  *((_WORD *)a4 + 21) = 3;
  *((_DWORD *)a4 + 16) = v20;
  v5 = AMLIAsyncEvalObject(v27, 0LL, 1, (__int64)(a4 + 5), LinkNodepRunSrsWorker, (__int64)a4);
  AMLIDereferenceHandleEx((__int64)v27);
  if ( v5 != 259 )
  {
    if ( v5 >= 0 )
      goto LABEL_42;
    goto LABEL_43;
  }
  return 259LL;
}
