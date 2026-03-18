/*
 * XREFs of imp_WdfRegistryAssignMemory @ 0x140099600
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14004533C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ValidateMemoryOffsets@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@@Z @ 0x14004D998 (-ValidateMemoryOffsets@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14006D5F4 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfRegistryAssignMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        ULONG ValueType,
        WDFMEMORY__ *Memory,
        _WDFMEMORY_OFFSET *MemoryOffsets)
{
  WDFMEMORY__ *_a2; // rdi
  __int64 result; // rax
  char *v10; // r12
  unsigned __int64 v11; // rax
  _WDFMEMORY_OFFSET *v12; // r15
  ULONG v13; // edx
  signed int _a3; // r14d
  unsigned __int16 v15; // r9
  unsigned __int64 BufferLength; // rax
  NTSTATUS v17; // eax
  unsigned int v18; // edi
  FxRegKey *pKey; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-8h]
  unsigned __int64 retaddr; // [rsp+88h] [rbp+38h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+90h] [rbp+40h] BYREF
  IFxMemory *pMemory; // [rsp+A0h] [rbp+50h] BYREF
  ULONG Type; // [rsp+A8h] [rbp+58h]

  Type = ValueType;
  pFxDriverGlobals = 0LL;
  pMemory = 0LL;
  pKey = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey,
    &pFxDriverGlobals);
  if ( !ValueName )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  _a2 = Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(pFxDriverGlobals, ValueName);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(pFxDriverGlobals, (unsigned __int64)_a2, 0x100Au, (void **)&pMemory);
      v10 = (char *)pMemory->GetBuffer(pMemory);
      v11 = pMemory->GetBufferSize(pMemory);
      v12 = MemoryOffsets;
      v13 = v11;
      v20 = v11;
      if ( MemoryOffsets )
      {
        _a3 = IFxMemory::ValidateMemoryOffsets(pMemory, MemoryOffsets);
        if ( _a3 < 0 )
        {
          v15 = 33;
LABEL_10:
          WPP_IFR_SF_qqd(pFxDriverGlobals, 2u, 2u, v15, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2, _a3);
          return (unsigned int)_a3;
        }
        BufferLength = v12->BufferLength;
        if ( BufferLength )
        {
          if ( BufferLength > 0xFFFFFFFF )
          {
            _a3 = -1073741675;
            v15 = 34;
            goto LABEL_10;
          }
          v13 = v12->BufferLength;
        }
        else
        {
          v13 = v20;
        }
        v10 += v12->BufferOffset;
      }
      v17 = ZwSetValueKey(pKey->m_Key, ValueName, 0, Type, v10, v13);
      v18 = v17;
      if ( v17 < 0 )
        WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 2u, 0x23u, WPP_FxRegistryAPI_cpp_Traceguids, Key, v17);
      else
        FxRegKey::_VerifyStateSeparationRegistryPolicy(pKey->m_Globals, pKey->m_Key);
      return v18;
    }
  }
  return result;
}
