/*
 * XREFs of ??0LegacyInputSinkData@@QEAA@$$QEAV0@@Z @ 0x180051FF4
 * Callers:
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180051F60 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LegacyInputSinkData::LegacyInputSinkData(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  *(_BYTE *)(a1 + 8) = -1;
  v2 = *(char *)(a2 + 8) + 1LL;
  if ( *(char *)(a2 + 8) != -1LL )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    if ( v2 == 1 )
    {
      *(_BYTE *)(a1 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = 0LL;
      *(_BYTE *)(a1 + 8) = 1;
    }
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_WORD *)(a1 + 24) = *(_WORD *)(a2 + 24);
  *(_QWORD *)(a1 + 28) = *(_QWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 152);
  *(_OWORD *)(a1 + 168) = *(_OWORD *)(a2 + 168);
  *(_OWORD *)(a1 + 184) = *(_OWORD *)(a2 + 184);
  *(_OWORD *)(a1 + 200) = *(_OWORD *)(a2 + 200);
  *(_OWORD *)(a1 + 216) = *(_OWORD *)(a2 + 216);
  *(_OWORD *)(a1 + 232) = *(_OWORD *)(a2 + 232);
  *(_OWORD *)(a1 + 248) = *(_OWORD *)(a2 + 248);
  *(_OWORD *)(a1 + 264) = *(_OWORD *)(a2 + 264);
  *(_OWORD *)(a1 + 280) = *(_OWORD *)(a2 + 280);
  *(_OWORD *)(a1 + 296) = *(_OWORD *)(a2 + 296);
  *(_OWORD *)(a1 + 312) = *(_OWORD *)(a2 + 312);
  *(_OWORD *)(a1 + 328) = *(_OWORD *)(a2 + 328);
  *(_OWORD *)(a1 + 344) = *(_OWORD *)(a2 + 344);
  *(_OWORD *)(a1 + 360) = *(_OWORD *)(a2 + 360);
  *(_OWORD *)(a1 + 376) = *(_OWORD *)(a2 + 376);
  *(_OWORD *)(a1 + 392) = *(_OWORD *)(a2 + 392);
  *(_OWORD *)(a1 + 408) = *(_OWORD *)(a2 + 408);
  *(_DWORD *)(a1 + 424) = *(_DWORD *)(a2 + 424);
  return a1;
}
