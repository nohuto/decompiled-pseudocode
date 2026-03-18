/*
 * XREFs of ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C0D40
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x140039504 (-AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400398C0 (-ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400A9C6C (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C10BC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEAUVIDMM_PHYSICAL_ALLOC@@_K2@Z @ 0x1400EE6C0 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEAUVIDMM_PHYSICAL_AL.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1400FCBA0 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x14010322C (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x140111C90 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::CommitResource(
        VIDMM_CPU_HOST_APERTURE **this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v2; // r12
  struct _MDL *v5; // rbx
  __int64 v6; // r13
  int v7; // r15d
  int v8; // edi
  __int64 v9; // r8
  unsigned int v10; // ebx
  unsigned __int16 v11; // ax
  __int64 v12; // rdi
  VIDMM_PROCESS_ADAPTER_INFO *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // rax
  VIDMM_CPU_HOST_APERTURE *v20; // rcx
  void *v21; // rcx
  __int64 v22; // rax
  struct _MDL *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *v27; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+50h] [rbp-48h]
  unsigned __int16 v29; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v30; // [rsp+B0h] [rbp+18h]
  int v31; // [rsp+B8h] [rbp+20h]

  v2 = *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v2;
    WdLogGlobalForLineNumber = 1202;
  }
  v5 = 0LL;
  v6 = *((_QWORD *)v2 + 6);
  if ( *((_BYTE *)v2 + 40) )
  {
    v20 = this[69];
    if ( v20 )
    {
      v8 = VIDMM_CPU_HOST_APERTURE::MapRange(
             v20,
             *((struct VIDMM_CPU_HOST_APERTURE_RANGE **)a2 + 24),
             a2,
             *((_QWORD *)a2 + 12),
             v27);
      if ( v8 < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1237;
        DxgkLogInternalTriageEvent(v26, 0x40000LL);
        goto LABEL_29;
      }
      v23 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
              this[69],
              *(void **)(v6 + 16),
              *((const struct VIDMM_CPU_HOST_APERTURE_RANGE **)a2 + 24),
              *((_QWORD *)a2 + 12),
              *((_QWORD *)a2 + 2));
    }
    else
    {
      v21 = *(void **)(v6 + 16);
      v22 = *((_QWORD *)a2 + 12);
      if ( (*(_DWORD *)(*((_QWORD *)this[3] + 3) + 444LL) & 8) != 0 )
        v23 = VidMmiBuildMdlFromMdl(
                v21,
                *((_QWORD *)a2 + 2),
                *(struct _MDL **)(*((_QWORD *)a2 + 13) + 56LL),
                v22 / 4096);
      else
        v23 = VidMmiBuildMdlForContiguousMmIo(
                v21,
                *((_QWORD *)a2 + 2),
                (union _LARGE_INTEGER)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 56LL) + v22));
    }
    v5 = v23;
    if ( v23 )
      goto LABEL_4;
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1295;
    DxgkLogInternalTriageEvent(v24, 0x40000LL);
    v8 = -1073741801;
LABEL_29:
    v25 = *((_QWORD *)a2 + 24);
    if ( v25 && *(_DWORD *)(v25 + 32) != -1 )
      VIDMM_CPU_HOST_APERTURE::UnmapRange(this[69], (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v25);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return (unsigned int)v8;
  }
LABEL_4:
  v7 = VIDMM_MEMORY_SEGMENT::TransferToSegment((VIDMM_MEMORY_SEGMENT *)this, v2, v5, 0);
  v8 = v7;
  if ( v7 < 0 )
    goto LABEL_29;
  if ( v6 )
  {
    v9 = *(_QWORD *)(v6 + 8);
    if ( v9 )
    {
      v28 = *((_QWORD *)a2 + 2);
      v30 = *((_WORD *)this + 20);
      v10 = *(_DWORD *)(*(_QWORD *)v2 + 44LL);
      v29 = *((_WORD *)this + 210);
      v11 = 0;
      if ( ((_DWORD)this[13] & 0x1000) == 0 )
        v11 = v30 + 1;
      v31 = v11;
      v12 = *(unsigned int *)(*((_QWORD *)this[3] + 3) + 240LL);
      v13 = *(VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(v9 + 16) + 8 * v12);
      VIDMM_PROCESS_ADAPTER_INFO::AcquireProcessAdapterInfoLock(v13);
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL) + 8 * v12);
      if ( v14 )
        v15 = *(_QWORD *)(304LL * v29 + *(_QWORD *)(v14 + 16)) + 184LL * v30;
      else
        v15 = 0LL;
      if ( !v10 || (v10 & 0x1F) == v31 )
      {
        ++*(_DWORD *)(v15 + 64);
        v8 = v7;
        *(_QWORD *)(v15 + 72) += v28;
      }
      else
      {
        v17 = 1;
        v18 = 6;
        v8 = v7;
        while ( v18 < 0x1E )
        {
          if ( ((v10 >> v18) & 0x1F) == v31 )
          {
            v19 = 2LL * v17;
            *(_QWORD *)(v15 + 8 * v19 + 72) += v28;
            ++*(_DWORD *)(v15 + 8 * v19 + 64);
            goto LABEL_13;
          }
          ++v17;
          v18 += 6;
        }
        *(_QWORD *)(v15 + 152) += v28;
        ++*(_DWORD *)(v15 + 144);
      }
LABEL_13:
      VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock(v13);
    }
  }
  *((_QWORD *)this[3] + 5028) += *((_QWORD *)a2 + 2) >> 12;
  *((_QWORD *)this[3] + 5554) += *((_QWORD *)a2 + 2);
  return (unsigned int)v8;
}
