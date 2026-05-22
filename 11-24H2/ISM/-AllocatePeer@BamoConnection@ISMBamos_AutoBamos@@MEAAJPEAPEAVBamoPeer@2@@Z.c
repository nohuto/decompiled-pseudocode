/*
 * XREFs of ?AllocatePeer@BamoConnection@ISMBamos_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z @ 0x180072260
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall ISMBamos_AutoBamos::BamoConnection::AllocatePeer(
        ISMBamos_AutoBamos::BamoConnection *this,
        struct ISMBamos_AutoBamos::BamoPeer **a2)
{
  _DWORD *v4; // [rsp+38h] [rbp+10h]

  v4 = operator new(0x68uLL);
  *(_QWORD *)v4 = &ISMBamos_AutoBamos::BamoPeer::`vftable';
  v4[4] = 1;
  *((_QWORD *)v4 + 3) = v4;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  *((_WORD *)v4 + 28) = 0;
  *((_QWORD *)v4 + 8) = 0LL;
  *((_QWORD *)v4 + 9) = 0LL;
  *((_QWORD *)v4 + 10) = 0LL;
  *((_QWORD *)v4 + 11) = 0LL;
  *((_QWORD *)v4 + 12) = 0LL;
  *((_QWORD *)v4 + 1) = &BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::`vftable';
  *a2 = (struct ISMBamos_AutoBamos::BamoPeer *)v4;
  return 0LL;
}
