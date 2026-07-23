/*
 * XREFs of HvlpSlowAcknowledgePageRequest @ 0x140585E70
 * Callers:
 *     HvlAcknowledgePageRequest @ 0x1405830E0 (HvlAcknowledgePageRequest.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     HvlpFastAcknowledgePageRequest @ 0x140585E18 (HvlpFastAcknowledgePageRequest.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HvlpSlowAcknowledgePageRequest(unsigned int a1, const void *a2, int *a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]
  __int64 v11; // [rsp+68h] [rbp+20h]

  v3 = a1;
  v8 = 0LL;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v6 = HvlpAcquireHypercallPage((__int64)&v8, 5, 0LL, 0LL);
  if ( v6 )
  {
    memmove(v6, a2, 32 * v3);
    v11 = HvcallInitiateHypercall(166);
    HvlpReleaseHypercallPage((unsigned int *)&v8);
    *a3 = WORD2(v11) & 0xFFF;
    return (unsigned __int16)v11;
  }
  else
  {
    if ( (unsigned int)v3 >= 3 )
      LODWORD(v3) = 3;
    return HvlpFastAcknowledgePageRequest(v3, (__int64)a2, a3);
  }
}
