/*
 * XREFs of ?Channel_BeginDuplicateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_BEGINDUPLICATERESOURCE@@@Z @ 0x1801E61D8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     McTemplateU0qqqqx_EventWriteTransfer @ 0x1801E6380 (McTemplateU0qqqqx_EventWriteTransfer.c)
 *     ??$_Emplace_reallocate@U?$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@std@@@?$vector@U?$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@std@@V?$allocator@U?$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@std@@@2@@std@@AEAAPEAU?$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@1@QEAU21@$$QEAU21@@Z @ 0x1801E6434 (--$_Emplace_reallocate@U-$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@std@@@-$vector@U-$pair@PEAVC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::Channel_BeginDuplicateResource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_BEGINDUPLICATERESOURCE *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // edi
  __int64 v8; // rax
  __int64 v10; // r14
  int v11; // ebp
  __int64 v12; // rax
  _QWORD *v13; // rbx
  _OWORD *v14; // rdx
  int v15; // edx
  int v16; // ecx
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF

  v4 = *((_DWORD *)a4 + 1);
  v5 = 0;
  if ( v4
    && v4 < *((_DWORD *)a3 + 7)
    && (v8 = *((_QWORD *)a3 + 5), *(_DWORD *)(*((_DWORD *)a3 + 6) * v4 + v8))
    && (v10 = *(_QWORD *)(*((_DWORD *)a3 + 6) * v4 + v8 + 8)) != 0 )
  {
    if ( v4 >= *((_DWORD *)a3 + 7) )
      v11 = 0;
    else
      v11 = *(_DWORD *)(*((_DWORD *)a3 + 6) * v4 + v8);
    v12 = *((unsigned int *)a4 + 2);
    if ( (unsigned int)v12 < 0x10000
      && (unsigned int)v12 < *((_DWORD *)this + 216)
      && (v13 = *(_QWORD **)(*((_QWORD *)this + 105) + 8 * v12)) != 0LL )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v13 + 1));
      *(_QWORD *)&v17 = v10;
      v14 = (_OWORD *)v13[11];
      DWORD2(v17) = v11;
      if ( v14 == (_OWORD *)v13[12] )
      {
        std::vector<std::pair<CResource *,enum MIL_RESOURCE_TYPE>>::_Emplace_reallocate<std::pair<CResource *,enum MIL_RESOURCE_TYPE>>(
          v13 + 10,
          v14,
          &v17);
      }
      else
      {
        *v14 = v17;
        v13[11] += 16LL;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000000) != 0 )
        McTemplateU0qqqqx_EventWriteTransfer(
          v16,
          v15,
          *((_DWORD *)a2 + 6),
          *((_DWORD *)a4 + 1),
          *((_DWORD *)a4 + 2),
          v11,
          v10);
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((CDrawListCache *)v13);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x6B6u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x521u, 0LL);
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x51Cu, 0LL);
  }
  return v5;
}
