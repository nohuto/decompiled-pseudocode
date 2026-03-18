/*
 * XREFs of ?Initialize@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEBUDXGK_PHYSICALADAPTERINFO@@PEBU_DXGK_GPUMMUCAPS@@@Z @ 0x14009D134
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093FBC (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlStringCbPrintfW @ 0x14003DF74 (RtlStringCbPrintfW.c)
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400985C4 (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     CreatePhysicalAdapterSegments @ 0x14009CC14 (CreatePhysicalAdapterSegments.c)
 *     ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x14010CB84 (-InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::Initialize(
        VIDMM_GLOBAL **this,
        const struct DXGK_PHYSICALADAPTERINFO *a2,
        const struct _DXGK_GPUMMUCAPS *a3)
{
  unsigned __int16 v6; // r9
  char v7; // dl
  char v8; // al
  unsigned __int8 v9; // cl
  __int64 result; // rax
  char v11; // dl
  char v12; // al
  char v13; // cl
  int v14; // eax
  wchar_t *v15; // rdi
  __int64 v16; // r8
  NTSTATUS v17; // ebx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  VIDMM_GLOBAL *v21; // rdx
  bool v22; // cl
  int Data; // [rsp+20h] [rbp-58h]
  int v24; // [rsp+28h] [rbp-50h]
  struct _PCW_DATA v25; // [rsp+50h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF

  VIDMM_GLOBAL::ReadPhysicalAdapterConfiguration(this[6], *((unsigned __int16 *)this + 28));
  v6 = *((_WORD *)this + 28);
  v7 = *((_BYTE *)this + 476) ^ (*((_BYTE *)this + 476) ^ (2 * *((_BYTE *)a2 + 16))) & 2;
  *((_BYTE *)this + 476) = v7;
  v8 = v7 ^ (v7 ^ (*((_DWORD *)a2 + 4) >> 1)) & 1;
  *((_BYTE *)this + 476) = v8;
  v9 = v8 ^ (v8 ^ (4 * (*((_DWORD *)a2 + 4) >> 6))) & 4;
  *((_BYTE *)this + 476) = v9;
  *((_BYTE *)this + 476) = (v9 ^ (v9 ^ (8 * (*((_DWORD *)a2 + 4) >> 7))) & 8) & 0xEF | (((v9 ^ (v9 ^ (unsigned __int8)(8 * (*((_DWORD *)a2 + 4) >> 7))) & 8) & 0xD) != 0
                                                                                      ? 0x10
                                                                                      : 0);
  result = CreatePhysicalAdapterSegments((__int64)this[6], (__int64)this, (__int64)a3, v6);
  if ( (int)result < 0 )
    return result;
  v11 = *((_BYTE *)this + 477);
  *((_DWORD *)this + 15) = (1 << *((_DWORD *)this + 16)) - 1;
  if ( v11 < 0 )
  {
    v12 = *((_BYTE *)this + 478);
    if ( (v12 & 1) != 0 )
      *((_BYTE *)this + 478) = v12 | 4;
  }
  v13 = *((_BYTE *)this + 552) | 2;
  *((_BYTE *)this + 552) = v13;
  if ( (v11 & 0x40) != 0 )
  {
    *((_DWORD *)this + 134) = dword_140081540;
    VIDMM_GLOBAL::InitializeSegmentGroupState(
      this[6],
      *((unsigned __int16 *)this + 28),
      (struct VIDMM_SEGMENT_GROUP_STATE *)(this + 73),
      0LL);
    v14 = dword_140081544;
    *((_BYTE *)this + 576) |= 3u;
    *((_DWORD *)this + 140) = v14;
    DestinationString = 0LL;
    v15 = (wchar_t *)operator new[](520LL, 0x4B677844u, 258LL);
    v24 = *((unsigned __int16 *)this + 28);
    v16 = *((_QWORD *)this[6] + 3);
    Data = *(_DWORD *)(v16 + 412);
    v17 = RtlStringCbPrintfW(v15, 0x208uLL, L"luid_0x%08X_0x%08X_phys_%u", *(unsigned int *)(v16 + 416), Data, v24);
    if ( v17 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v15);
      v25.Data = this + 73;
      v25.Size = 344;
      v17 = PcwCreateInstance(this + 115, GpuPerformanceCounterSetLocalAdapterMemory, &DestinationString, 1u, &v25);
      if ( v17 >= 0 )
        goto LABEL_11;
      _InterlockedIncrement(&dword_140081870);
      WdLogSingleEntry0(6LL);
      v19 = 985;
    }
    else
    {
      _InterlockedIncrement(&dword_140081870);
      WdLogSingleEntry0(6LL);
      v19 = 976;
    }
    WdLogGlobalForLineNumber = v19;
    DxgkLogInternalTriageEvent(v18, 262145LL);
LABEL_11:
    operator delete(v15);
    if ( v17 < 0 )
      return (unsigned int)v17;
    goto LABEL_14;
  }
  v20 = dword_140081544;
  *((_BYTE *)this + 576) &= ~2u;
  *((_BYTE *)this + 552) = v13 | 1;
  *((_DWORD *)this + 134) = v20;
LABEL_14:
  v21 = this[6];
  if ( (*(_DWORD *)(*((_QWORD *)v21 + 3) + 444LL) & 8) != 0 )
    v22 = *((_QWORD *)v21 + 884) != 0LL;
  else
    v22 = *((_QWORD *)v21 + 884) >= (unsigned __int64)qword_1400812F0;
  *((_BYTE *)v21 + 7081) = v22;
  return 0LL;
}
