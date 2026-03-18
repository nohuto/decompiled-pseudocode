/*
 * XREFs of ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x14036CF24
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x14036ABE0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     memcmp @ 0x1400A01E0 (memcmp.c)
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x14036BFAC (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsEnabledSetEqual(CCD_SET_STRING_ID *this, const struct CCD_SET_STRING_ID *a2)
{
  __int64 i; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  void *Buf1[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING Buf2; // [rsp+30h] [rbp-18h] BYREF

  if ( *((_WORD *)this + 16) != *((_WORD *)a2 + 16) )
    return 0;
  for ( i = 0LL; (unsigned int)i < *((unsigned __int16 *)this + 16); i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)this + 3);
    *(_OWORD *)Buf1 = 0LL;
    CCD_SET_STRING_ID::QueryMonitorId(this, *(unsigned __int16 *)(v5 + 8 * i + 6), (struct _STRING *)Buf1);
    v6 = *((_QWORD *)a2 + 3);
    Buf2 = 0LL;
    CCD_SET_STRING_ID::QueryMonitorId(a2, *(unsigned __int16 *)(v6 + 8 * i + 6), &Buf2);
    if ( LOWORD(Buf1[0]) < Buf2.Length || LOWORD(Buf1[0]) > Buf2.Length || memcmp(Buf1[1], Buf2.Buffer, Buf2.Length) )
      return 0;
  }
  return 1;
}
