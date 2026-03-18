/*
 * XREFs of PspQueryWorkingSetWatch @ 0x140A0AC88
 * Callers:
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ExIsRestrictedCaller @ 0x140A0AFF8 (ExIsRestrictedCaller.c)
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
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  PVOID v12; // rcx
  __int64 v13; // rsi
  int v14; // r14d
  __int64 v15; // r12
  signed __int32 v16; // ebx
  unsigned int v17; // r13d
  int v18; // r11d
  unsigned int v19; // ecx
  char v20; // al
  __int64 v21; // rcx
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
    v12 = Object;
    v13 = *((_QWORD *)Object + 88);
    v29 = v13;
    if ( !v13 )
    {
      v14 = -1073741823;
      goto LABEL_10;
    }
    CurrentThread = KeGetCurrentThread();
    v14 = 0;
    v15 = 0LL;
    v26 = 0LL;
    --CurrentThread->KernelApcDisable;
    _m_prefetchw((const void *)v13);
    v16 = _InterlockedOr((volatile signed __int32 *)v13, 1u);
    if ( (v16 & 1) != 0 )
    {
      v14 = -2147483622;
      goto LABEL_9;
    }
    v17 = (unsigned __int16)v16 >> 1;
    if ( !((unsigned __int16)v16 >> 1) )
    {
      v14 = -2147483622;
      goto LABEL_25;
    }
    if ( (v16 & 0x7FFF0000) != 0 )
      KeWaitForGate(v13 + 16, 0, 0);
    v18 = (int)v25;
    v19 = (_DWORD)v25 * (v17 + 1);
    if ( a4 < v19 )
    {
      v14 = -1073741789;
      if ( a5 )
        *a5 = v19;
      goto LABEL_21;
    }
    _m_prefetchw((const void *)(v13 + 8));
    v15 = *(_QWORD *)(v13 + 8);
    v26 = v15;
    if ( a2 == 42 )
    {
      v25 = a3;
      v10 = 0LL;
      v24 = 0;
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= v17 )
        {
          a3 += 4 * (unsigned int)v11;
          v28 = a3;
          a3[2] = 0LL;
          a3[3] = 0LL;
LABEL_38:
          *a3 = 0LL;
          a3[1] = v15;
          if ( a5 )
            *a5 = v18 * (v11 + 1);
LABEL_21:
          if ( v14 >= 0 )
          {
            _InterlockedAdd64((volatile signed __int64 *)(v13 + 8), -v15);
            *(_DWORD *)v13 = 0;
            goto LABEL_9;
          }
LABEL_25:
          _interlockedbittestandreset((volatile signed __int32 *)v13, 0);
LABEL_9:
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v9, v10, v11);
          v12 = Object;
LABEL_10:
          ObfDereferenceObjectWithTag(v12, 0x79517350u);
          return (unsigned int)v14;
        }
        v20 = 1;
        if ( v23 )
        {
          if ( *(_QWORD *)(v13 + 24 * v10 + 40) <= 0x7FFFFFFEFFFFuLL
            && *(_QWORD *)(v13 + 24 * v10 + 48) <= 0x7FFFFFFEFFFFuLL )
          {
LABEL_32:
            v21 = 4LL * (unsigned int)v11;
            *(_OWORD *)&a3[v21] = *(_OWORD *)(v13 + 24 * v10 + 40);
            a3[v21 + 2] = *(_QWORD *)(v13 + 24 * v10 + 56);
            a3[v21 + 3] = 0LL;
            v11 = (unsigned int)(v11 + 1);
            goto LABEL_33;
          }
          v20 = 0;
        }
        if ( v20 )
          goto LABEL_32;
LABEL_33:
        v10 = (unsigned int)(v10 + 1);
        v24 = v10;
      }
    }
    v28 = a3;
    v9 = 0LL;
    v24 = 0;
    v11 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= (unsigned __int16)v16 >> 1 )
        goto LABEL_38;
      v22 = 1;
      if ( !v23 )
        goto LABEL_46;
      if ( *(_QWORD *)(v13 + 24 * v9 + 40) > 0x7FFFFFFEFFFFuLL || *(_QWORD *)(v13 + 24 * v9 + 48) > 0x7FFFFFFEFFFFuLL )
        break;
LABEL_47:
      *(_OWORD *)a3 = *(_OWORD *)(v13 + 24 * v9 + 40);
      a3 += 2;
      v28 = a3;
      v11 = (unsigned int)(v11 + 1);
LABEL_48:
      v9 = (unsigned int)(v9 + 1);
      v24 = v9;
    }
    v22 = 0;
LABEL_46:
    if ( !v22 )
      goto LABEL_48;
    goto LABEL_47;
  }
  return result;
}
