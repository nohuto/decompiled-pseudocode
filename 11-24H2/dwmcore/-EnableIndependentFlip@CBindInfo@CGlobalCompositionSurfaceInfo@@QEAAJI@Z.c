/*
 * XREFs of ?EnableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z @ 0x180208A68
 * Callers:
 *     ?EnableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_KII@Z @ 0x1802089F0 (-EnableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_KII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x1801DF53C (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnableIndependentFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        int a2)
{
  int v3; // ecx
  int v4; // ebp
  unsigned int v5; // ebx
  int v6; // eax
  _DWORD *v7; // rdi
  __int64 v9; // [rsp+20h] [rbp-48h]
  void *v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+40h] [rbp-28h]
  int v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+78h] [rbp+10h] BYREF

  v15 = a2;
  v3 = *((_DWORD *)this + 52);
  v4 = 0;
  v14 = 0;
  v5 = 0;
  v6 = NtSetCompositionSurfaceIndependentFlipInfo(
         *(_QWORD *)(*(_QWORD *)this + 32LL),
         (char *)this + 24,
         1LL,
         *((_BYTE *)this + 181) != 0,
         *((_DWORD *)this + 54),
         1 << v3,
         &v15,
         &v14);
  if ( v6 >= 0 )
  {
    v7 = (_DWORD *)((char *)this + 212);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      LOBYTE(v4) = *((_BYTE *)this + 181) != 0;
      v13 = *((unsigned __int8 *)this + 182);
      LODWORD(v12) = *((_DWORD *)this + 54);
      LODWORD(v11) = v4;
      LODWORD(v10) = 1;
      LODWORD(v9) = *v7;
      McTemplateU0xxqqqqq_EventWriteTransfer(
        *(unsigned int *)(*(_QWORD *)this + 40LL),
        *((unsigned __int8 *)this + 182),
        *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32),
        *((_QWORD *)this + 3),
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    *v7 = v15;
    *((_BYTE *)this + 180) = 1;
  }
  else
  {
    v5 = v6 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6 | 0x10000000, 0x501u, 0LL);
  }
  return v5;
}
