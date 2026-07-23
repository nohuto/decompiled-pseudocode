/*
 * XREFs of PspChargeQuota @ 0x14027BB30
 * Callers:
 *     PsChargeProcessQuota @ 0x14046CF4C (PsChargeProcessQuota.c)
 *     ObpIncrementHandleCountEx @ 0x14084BE20 (ObpIncrementHandleCountEx.c)
 *     ObSetSecurityDescriptorInfo @ 0x140854B90 (ObSetSecurityDescriptorInfo.c)
 *     PsChargeProcessPagedPoolQuota @ 0x14089EAD0 (PsChargeProcessPagedPoolQuota.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 *     ObpChargeQuotaForObject @ 0x14096DFE0 (ObpChargeQuotaForObject.c)
 *     PsChargeSharedPoolQuota @ 0x1409779B0 (PsChargeSharedPoolQuota.c)
 * Callees:
 *     PspExpandQuota @ 0x14027BC98 (PspExpandQuota.c)
 */

__int64 __fastcall PspChargeQuota(__int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
  __int64 v4; // r13
  unsigned __int64 *v7; // rdi
  __int64 v8; // r12
  char v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  bool v13; // zf
  signed __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 i; // [rsp+60h] [rbp+8h] BYREF

  v4 = a3;
  v7 = (unsigned __int64 *)(a1 + ((__int64)a3 << 7));
  v8 = 8LL * a3;
  v9 = PspResourceFlags[v8];
  _m_prefetchw(v7);
  v10 = *v7;
  _InterlockedOr(v22, 0);
  while ( 2 )
  {
    v11 = v7[8];
LABEL_3:
    for ( i = v11; ; v11 = i )
    {
      v12 = v10 + a4;
      if ( v10 + a4 < v10 )
        return *(unsigned int *)&PspResourceFlags[v8 + 4];
      if ( v12 <= v11 )
        break;
      if ( (v9 & 1) == 0 || !v7[10] )
        return *(unsigned int *)&PspResourceFlags[v8 + 4];
      v21 = _InterlockedExchange64((volatile __int64 *)v7 + 9, 0LL);
      if ( v21 )
      {
        v11 = v21 + _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 8, v21);
        goto LABEL_3;
      }
      if ( !(unsigned __int8)PspExpandQuota(v4, (_DWORD)v7, v10, a4, (__int64)&i) )
        return *(unsigned int *)&PspResourceFlags[v8 + 4];
    }
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v7, v12, v10);
    v13 = v10 == v14;
    v10 = v14;
    if ( !v13 )
      continue;
    break;
  }
  _m_prefetchw(v7 + 1);
  v15 = v7[1];
  do
  {
    if ( v12 <= v15 )
      break;
    v19 = v15;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 1, v12, v15);
  }
  while ( v15 != v19 );
  if ( a2 && (v9 & 4) != 0 )
  {
    v16 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + a2 + 512), a4);
    _m_prefetchw((const void *)(a2 + 8 * v4 + 528));
    v17 = *(_QWORD *)(a2 + 8 * v4 + 528);
    do
    {
      if ( v16 <= v17 )
        break;
      v20 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 8 * v4 + 528), v16, v17);
    }
    while ( v17 != v20 );
  }
  return 0LL;
}
