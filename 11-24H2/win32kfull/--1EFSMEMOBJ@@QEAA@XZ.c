/*
 * XREFs of ??1EFSMEMOBJ@@QEAA@XZ @ 0x1400BAAE0
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400BA5EC (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400F8978 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1400F8FE8 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall EFSMEMOBJ::~EFSMEMOBJ(EFSMEMOBJ *this)
{
  ULONG v2; // ecx

  if ( *(_QWORD *)this )
  {
    **((_DWORD **)this + 8) = *(_DWORD *)(*(_QWORD *)this + 112LL);
    v2 = *(_DWORD *)(*(_QWORD *)this + 28LL);
    if ( v2 )
      EngSetLastError(v2);
    FreeTmpBuffer(*(_QWORD *)this);
  }
  else
  {
    **((_DWORD **)this + 8) = 0;
    EngSetLastError(0xEu);
  }
}
