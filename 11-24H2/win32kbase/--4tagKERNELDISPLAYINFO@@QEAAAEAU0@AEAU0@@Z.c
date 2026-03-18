/*
 * XREFs of ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z @ 0x1401B1D6C
 * Callers:
 *     ?DrvDriverFailure@@YAJXZ @ 0x1401B1EA4 (-DrvDriverFailure@@YAJXZ.c)
 * Callees:
 *     ??4?$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x14000B680 (--4-$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUta.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x14019FA88 (--4-$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagM.c)
 */

__int64 __fastcall tagKERNELDISPLAYINFO::operator=(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  _DWORD **v4; // r9
  __int64 v5; // r10
  unsigned int v6; // ecx

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 100);
  tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
    (_QWORD *)(a1 + 104),
    *(_QWORD *)(a2 + 104));
  tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorFirst<tagMONITOR>::operator=(
    (_QWORD *)(v3 + 112),
    *(_QWORD *)(v2 + 112));
  *(_DWORD *)(*(_QWORD *)v5 + 24LL) = (*v4)[6];
  *(_DWORD *)(*(_QWORD *)v5 + 28LL) = (*v4)[7];
  *(_DWORD *)(*(_QWORD *)v5 + 32LL) = (*v4)[8];
  *(_DWORD *)(*(_QWORD *)v5 + 36LL) = (*v4)[9];
  *(_QWORD *)(v5 + 128) = v4[16];
  *(_WORD *)(v5 + 136) = *((_WORD *)v4 + 68);
  v6 = *((_DWORD *)v4 + 35) ^ (*(_DWORD *)(v5 + 140) ^ *((_DWORD *)v4 + 35)) & 0xFFFFFFFE;
  *(_DWORD *)(v5 + 140) = v6;
  *(_DWORD *)(v5 + 140) = *((_DWORD *)v4 + 35) ^ (*((_DWORD *)v4 + 35) ^ v6) & 0xFFFFFFFD;
  *(_DWORD *)(v5 + 144) = *((_DWORD *)v4 + 36);
  *(_OWORD *)(v5 + 152) = *(_OWORD *)(v4 + 19);
  **(_DWORD **)v5 = **v4;
  return v5;
}
