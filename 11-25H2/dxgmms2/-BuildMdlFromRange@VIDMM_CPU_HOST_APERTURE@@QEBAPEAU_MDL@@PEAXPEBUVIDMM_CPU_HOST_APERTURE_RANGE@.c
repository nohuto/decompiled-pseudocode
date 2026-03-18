/*
 * XREFs of ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1400FCBA0
 * Callers:
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BABA0 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_DRIVER_UPDATE_A.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C0D40 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     MapInCpuHostAperture @ 0x1401146B4 (MapInCpuHostAperture.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

PMDL __fastcall VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
        VIDMM_CPU_HOST_APERTURE *this,
        void *a2,
        const struct VIDMM_CPU_HOST_APERTURE_RANGE *a3,
        unsigned __int16 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v8; // rbp
  int v9; // r14d
  PMDL Mdl; // r9
  __int64 v11; // r10
  int v12; // edi
  unsigned int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // rdx
  int v16; // r8d
  __int64 i; // r11
  __int64 v19; // rcx
  CSHORT *p_Size; // r8
  unsigned __int64 v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // r11
  __int64 v25; // rcx

  v8 = a5 >> 12;
  v9 = *(_DWORD *)(*((_QWORD *)this + 6) + 416LL);
  Mdl = IoAllocateMdl(a2, (unsigned int)(a5 >> 12) << 12, 0, 0, 0LL);
  if ( Mdl )
  {
    Mdl->MdlFlags |= 0x802u;
    v11 = *((unsigned int *)a3 + 6);
    v12 = *((_DWORD *)a3 + 7);
    if ( v9 == 4096 )
    {
      p_Size = &Mdl[1].Size;
      v21 = *((_QWORD *)this + 4);
      v22 = v11;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 24LL) + 444LL) & 8) != 0 )
      {
        Mdl[1].Next = *(struct _MDL **)(v21 + 8 * v11 + 48);
        if ( (_DWORD)v11 != v12 )
        {
          do
          {
            v23 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v22);
            v22 = v23;
            *(_QWORD *)p_Size = *(_QWORD *)(v21 + 8 * v23 + 48);
            p_Size += 4;
          }
          while ( (_DWORD)v23 != v12 );
        }
      }
      else
      {
        v24 = v21 >> 12;
        Mdl[1].Next = (struct _MDL *)(v11 + v24);
        if ( (_DWORD)v11 != v12 )
        {
          do
          {
            v25 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v22);
            v22 = v25;
            *(_QWORD *)p_Size = v25 + v24;
            p_Size += 4;
          }
          while ( (_DWORD)v25 != v12 );
        }
      }
    }
    else
    {
      v13 = a4 >> 12;
      v14 = *((_QWORD *)this + 4) >> 12;
      v15 = v14 + (unsigned int)(16 * v11) + v13;
      v16 = 16 - v13;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v8; i = (unsigned int)(i + 1) )
      {
        if ( !v16 )
        {
          v16 = 16;
          LODWORD(v11) = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)v11);
          v15 = v14 + (unsigned int)(16 * v11);
        }
        --v16;
        *((_QWORD *)&Mdl[1].Next + i) = v15++;
      }
    }
    return Mdl;
  }
  else
  {
    _InterlockedIncrement(dword_140081770);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 221;
    DxgkLogInternalTriageEvent(v19, 262145LL);
    return 0LL;
  }
}
