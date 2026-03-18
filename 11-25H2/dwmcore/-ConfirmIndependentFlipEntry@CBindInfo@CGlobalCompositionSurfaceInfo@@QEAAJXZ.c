/*
 * XREFs of ?ConfirmIndependentFlipEntry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18020245C
 * Callers:
 *     ?ConfirmIndependentFlipEntry@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x1802023F0 (-ConfirmIndependentFlipEntry@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x1801E8E74 (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::ConfirmIndependentFlipEntry(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  int v1; // esi
  unsigned int v3; // edi
  __int64 v4; // rax
  _QWORD **v5; // rcx
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-38h]

  v1 = 0;
  v3 = 0;
  if ( *((_DWORD *)this + 44) == 2 && !*((_BYTE *)this + 182) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 9) + 40LL))(**((_QWORD **)this + 9));
    v5 = *(_QWORD ***)this;
    v6 = *((unsigned int *)this + 52);
    v7 = *(unsigned int *)(v4 + 632);
    LODWORD(v4) = *((_DWORD *)this + 53);
    *((_BYTE *)this + 182) = 1;
    v8 = NtConfirmCompositionSurfaceIndependentFlipEntry(v5[4], (char *)this + 24, v7, v6, v4);
    if ( v8 >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        LOBYTE(v1) = *((_BYTE *)this + 181) != 0;
        LODWORD(v10) = *((_DWORD *)this + 53);
        McTemplateU0xxqqqqq_EventWriteTransfer(
          (unsigned int)v10,
          *((unsigned __int8 *)this + 182),
          *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32),
          *((_QWORD *)this + 3),
          v10,
          1,
          v1,
          *((_DWORD *)this + 54),
          *((unsigned __int8 *)this + 182));
      }
    }
    else
    {
      v3 = v8 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8 | 0x10000000, 0x51Du, 0LL);
    }
  }
  return v3;
}
