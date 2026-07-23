/*
 * XREFs of PspQueryWorkingSetWatch @ 0x140A0D6C8
 * Callers:
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExIsRestrictedCaller @ 0x140A0DA38 (ExIsRestrictedCaller.c)
 */

__int64 __fastcall PspQueryWorkingSetWatch(
        ULONG_PTR BugCheckParameter1,
        int a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int *a5,
        char a6)
{
  ULONG_PTR v7; // rbx
  __int64 result; // rax
  PVOID v9; // rcx
  __int64 v10; // rsi
  int v11; // r14d
  __int64 v12; // r12
  signed __int32 v13; // ebx
  unsigned int v14; // r13d
  int v15; // r11d
  unsigned int v16; // ecx
  __int64 v17; // r8
  unsigned int v18; // r9d
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rdx
  char v22; // al
  int v23; // [rsp+44h] [rbp-64h] BYREF
  int v24; // [rsp+48h] [rbp-60h]
  _QWORD *v25; // [rsp+50h] [rbp-58h]
  __int64 v26; // [rsp+58h] [rbp-50h]
  PVOID Object; // [rsp+60h] [rbp-48h] BYREF
  _QWORD *v28; // [rsp+68h] [rbp-40h]
  __int64 v29; // [rsp+70h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-30h]

  v7 = BugCheckParameter1;
  Object = 0LL;
  v23 = 0;
  if ( a2 == 42 )
  {
    if ( (a4 & 0x1F) != 0 )
      return 3221225476LL;
    LODWORD(v25) = 32;
  }
  else
  {
    LODWORD(v25) = 16;
  }
  LOBYTE(BugCheckParameter1) = a6;
  if ( (unsigned int)ExIsRestrictedCaller(BugCheckParameter1, &v23) )
    return 3221225506LL;
  result = ObpReferenceObjectByHandleWithTag(v7, 1024, (__int64)PsProcessType, a6, 0x79517350u, &Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v9 = Object;
    v10 = *((_QWORD *)Object + 88);
    v29 = v10;
    if ( !v10 )
    {
      v11 = -1073741823;
      goto LABEL_10;
    }
    CurrentThread = KeGetCurrentThread();
    v11 = 0;
    v12 = 0LL;
    v26 = 0LL;
    --CurrentThread->KernelApcDisable;
    _m_prefetchw((const void *)v10);
    v13 = _InterlockedOr((volatile signed __int32 *)v10, 1u);
    if ( (v13 & 1) != 0 )
    {
      v11 = -2147483622;
      goto LABEL_9;
    }
    v14 = (unsigned __int16)v13 >> 1;
    if ( !((unsigned __int16)v13 >> 1) )
    {
      v11 = -2147483622;
      goto LABEL_25;
    }
    if ( (v13 & 0x7FFF0000) != 0 )
      KeWaitForGate(v10 + 16, 0LL);
    v15 = (int)v25;
    v16 = (_DWORD)v25 * (v14 + 1);
    if ( a4 < v16 )
    {
      v11 = -1073741789;
      if ( a5 )
        *a5 = v16;
      goto LABEL_21;
    }
    _m_prefetchw((const void *)(v10 + 8));
    v12 = *(_QWORD *)(v10 + 8);
    v26 = v12;
    if ( a2 == 42 )
    {
      v25 = a3;
      v17 = 0LL;
      v24 = 0;
      v18 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= v14 )
        {
          a3 += 4 * v18;
          v28 = a3;
          a3[2] = 0LL;
          a3[3] = 0LL;
LABEL_38:
          *a3 = 0LL;
          a3[1] = v12;
          if ( a5 )
            *a5 = v15 * (v18 + 1);
LABEL_21:
          if ( v11 >= 0 )
          {
            _InterlockedAdd64((volatile signed __int64 *)(v10 + 8), -v12);
            *(_DWORD *)v10 = 0;
            goto LABEL_9;
          }
LABEL_25:
          _interlockedbittestandreset((volatile signed __int32 *)v10, 0);
LABEL_9:
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          v9 = Object;
LABEL_10:
          ObfDereferenceObjectWithTag(v9, 0x79517350u);
          return (unsigned int)v11;
        }
        v19 = 1;
        if ( v23 )
        {
          if ( *(_QWORD *)(v10 + 24 * v17 + 40) <= 0x7FFFFFFEFFFFuLL
            && *(_QWORD *)(v10 + 24 * v17 + 48) <= 0x7FFFFFFEFFFFuLL )
          {
LABEL_32:
            v20 = 4LL * v18;
            *(_OWORD *)&a3[v20] = *(_OWORD *)(v10 + 24 * v17 + 40);
            a3[v20 + 2] = *(_QWORD *)(v10 + 24 * v17 + 56);
            a3[v20 + 3] = 0LL;
            ++v18;
            goto LABEL_33;
          }
          v19 = 0;
        }
        if ( v19 )
          goto LABEL_32;
LABEL_33:
        v17 = (unsigned int)(v17 + 1);
        v24 = v17;
      }
    }
    v28 = a3;
    v21 = 0LL;
    v24 = 0;
    v18 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v21 >= (unsigned __int16)v13 >> 1 )
        goto LABEL_38;
      v22 = 1;
      if ( !v23 )
        goto LABEL_46;
      if ( *(_QWORD *)(v10 + 24 * v21 + 40) > 0x7FFFFFFEFFFFuLL || *(_QWORD *)(v10 + 24 * v21 + 48) > 0x7FFFFFFEFFFFuLL )
        break;
LABEL_47:
      *(_OWORD *)a3 = *(_OWORD *)(v10 + 24 * v21 + 40);
      a3 += 2;
      v28 = a3;
      ++v18;
LABEL_48:
      v21 = (unsigned int)(v21 + 1);
      v24 = v21;
    }
    v22 = 0;
LABEL_46:
    if ( !v22 )
      goto LABEL_48;
    goto LABEL_47;
  }
  return result;
}
