/*
 * XREFs of KiStartProfileTarget @ 0x140494D80
 * Callers:
 *     KeStartProfile @ 0x1404CFCE0 (KeStartProfile.c)
 * Callees:
 *     KeSubtractAffinityEx2 @ 0x1402B2C40 (KeSubtractAffinityEx2.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403D7AC0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

ULONG_PTR __fastcall KiStartProfileTarget(_QWORD *Argument)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  unsigned __int8 CurrentIrql; // r12
  ULONG_PTR result; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 i; // rsi
  __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v14; // rbp
  int v15; // esi
  __int64 Number; // r14
  unsigned int v17; // r13d
  signed __int32 v18[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF

  v1 = *Argument;
  v2 = (unsigned __int8)KiProfileIrql;
  v3 = Argument;
  v20 = 0;
  v21 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)KiProfileIrql);
  if ( KiIrqlFlags != (unsigned __int8)v21 )
  {
    LOBYTE(Argument) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Argument, v2);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 2, 0xFFFFFFFF) != 1 )
    goto LABEL_4;
  if ( *(_BYTE *)(v1 + 610) )
  {
    *((_BYTE *)v3 + 304) = 0;
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(v1 + 24);
  v7 = (_QWORD *)(v1 + 8);
  *(_BYTE *)(v1 + 610) = 1;
  if ( v6 )
  {
    v8 = *(_QWORD **)(v6 + 32);
    v9 = v6 + 24;
    if ( *v8 != v9 )
      goto LABEL_25;
    *v7 = v9;
    *(_QWORD *)(v1 + 16) = v8;
    *v8 = v7;
    *(_QWORD *)(v9 + 8) = v7;
  }
  else
  {
    v10 = (_QWORD *)qword_140F223B8;
    if ( *(__int64 **)qword_140F223B8 != &KiProfileListHead )
      goto LABEL_25;
    *v7 = &KiProfileListHead;
    *(_QWORD *)(v1 + 16) = v10;
    *v10 = v7;
    qword_140F223B8 = v1 + 8;
  }
  for ( i = KiProfileSourceListHead; (__int64 *)i != &KiProfileSourceListHead; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) == *(__int16 *)(v1 + 608) )
      goto LABEL_24;
  }
  i = v3[36];
  v3[36] = 0LL;
  *(_DWORD *)(i + 16) = *(__int16 *)(v1 + 608);
  *(_QWORD *)(i + 24) = 2097184LL;
  memset_0((void *)(i + 32), 0, 0x100uLL);
  v12 = KiProfileSourceListHead;
  if ( *(__int64 **)(KiProfileSourceListHead + 8) != &KiProfileSourceListHead )
LABEL_25:
    __fastfail(3u);
  *(_QWORD *)i = KiProfileSourceListHead;
  *(_QWORD *)(i + 8) = &KiProfileSourceListHead;
  *(_QWORD *)(v12 + 8) = i;
  KiProfileSourceListHead = i;
LABEL_24:
  v3[37] = i;
  KeSubtractAffinityEx2(
    (struct _KAFFINITY_EX *)(v1 + 72),
    (struct _KAFFINITY_EX *)(i + 24),
    (struct _KAFFINITY_EX *)(v3 + 3));
  _InterlockedOr(v18, 0);
  *(_QWORD *)(v1 + 336) = 2097184LL;
  memset_0((void *)(v1 + 344), 0, 0x100uLL);
  *((_BYTE *)v3 + 304) = 1;
LABEL_4:
  _InterlockedDecrement((volatile signed __int32 *)v3 + 3);
  while ( *((int *)v3 + 3) > 0 )
    _mm_pause();
  if ( *((_BYTE *)v3 + 304) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = v3[37];
    v15 = 0;
    Number = CurrentPrcb->Number;
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)v3 + 12, CurrentPrcb->Number) )
    {
      v19 = &v21;
      v20 = 1718767691;
      v15 = guard_dispatch_icall_no_overrides((unsigned int)*(__int16 *)(v1 + 608), &v20);
      if ( v15 < 0 )
      {
LABEL_31:
        if ( v15 == -1073741637 )
          _InterlockedOr((volatile signed __int32 *)v3 + 4, 2u);
        else
          _InterlockedOr((volatile signed __int32 *)v3 + 4, 1u);
        goto LABEL_7;
      }
      v21 = _InterlockedExchange64((volatile __int64 *)(v1 + 600), v21);
    }
    v17 = CurrentPrcb->Number;
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v1 + 72), v17) )
    {
      KeInterlockedSetProcessorAffinityEx(v1 + 336, v17);
      KeInterlockedSetProcessorAffinityEx(v14 + 24, CurrentPrcb->Number);
      ++*(_DWORD *)(v14 + 4 * Number + 288);
      goto LABEL_7;
    }
    goto LABEL_31;
  }
LABEL_7:
  if ( KiIrqlFlags )
  {
    LOBYTE(v2) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
