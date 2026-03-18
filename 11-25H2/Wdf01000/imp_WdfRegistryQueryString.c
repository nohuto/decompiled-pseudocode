/*
 * XREFs of imp_WdfRegistryQueryString @ 0x140054630
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140019BF0 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140052C6C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1400533E0 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1400863E4 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qZd @ 0x140099404 (WPP_IFR_SF_qZd.c)
 */

__int64 __fastcall imp_WdfRegistryQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        WDFSTRING__ *String)
{
  _FX_DRIVER_GLOBALS *v7; // rdi
  __int64 result; // rax
  int v9; // eax
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  int v12; // ebx
  unsigned __int16 v13; // r9
  unsigned int v14; // ebx
  ULONG Tag; // ecx
  void *v16; // rax
  FX_POOL **v17; // rsi
  unsigned __int8 v18; // dl
  _FX_DRIVER_GLOBALS **ObjectGlobals; // [rsp+20h] [rbp-50h]
  int _a3; // [rsp+38h] [rbp-38h]
  _UNICODE_STRING tmp; // [rsp+50h] [rbp-20h] BYREF
  FxRegKey *pKey; // [rsp+60h] [rbp-10h] BYREF
  FxString *pString; // [rsp+68h] [rbp-8h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int dataLength; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int type; // [rsp+B0h] [rbp+40h] BYREF

  *(_QWORD *)&tmp.Length = 0LL;
  pString = 0LL;
  pKey = 0LL;
  dataLength = 0;
  type = 0;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey,
    (_FX_DRIVER_GLOBALS **)&tmp);
  if ( !ValueName )
    FxVerifierNullBugCheck(*(_FX_DRIVER_GLOBALS **)&tmp.Length, retaddr);
  if ( !String )
    FxVerifierNullBugCheck(*(_FX_DRIVER_GLOBALS **)&tmp.Length, retaddr);
  v7 = *(_FX_DRIVER_GLOBALS **)&tmp.Length;
  result = FxVerifierCheckIrqlLevel(*(_FX_DRIVER_GLOBALS **)&tmp.Length, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(v7, ValueName);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(v7, (unsigned __int64)String, 0x1007u, (void **)&pString);
      v9 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, &dataLength, &type);
      v12 = v9;
      if ( v9 >= 0 )
      {
        if ( type - 1 > 1 )
        {
          v12 = -1073741788;
          goto LABEL_7;
        }
      }
      else if ( v9 != -2147483643 )
      {
LABEL_7:
        v13 = 26;
LABEL_8:
        WPP_IFR_SF_qd(v7, 2u, 2u, v13, WPP_FxRegistryAPI_cpp_Traceguids, Key, v12);
        return (unsigned int)v12;
      }
      v14 = dataLength;
      if ( !dataLength )
      {
        WPP_IFR_SF_qZd(v7, v10, v11, 0x1Bu, (const _GUID *)ObjectGlobals, Key, ValueName, _a3);
        return 3221225609LL;
      }
      Tag = v7->Tag;
      v16 = retaddr;
      *(_QWORD *)&tmp.Length = 0LL;
      tmp.Buffer = (wchar_t *)256;
      if ( !v7->FxPoolTrackingOn )
        v16 = 0LL;
      v17 = FxPoolAllocator(v7, &v7->FxPoolFrameworks, (__m128i *)&tmp, dataLength, Tag, v16);
      if ( !v17 )
      {
        v12 = -1073741670;
        v13 = 28;
        goto LABEL_8;
      }
      v12 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, v14, v17, &dataLength, &type);
      if ( v12 >= 0 )
      {
        if ( type - 1 <= 1 )
        {
          if ( dataLength > 0xFFFF )
          {
            v12 = -1073741306;
            WPP_IFR_SF_qddd(v7, v18, 2u, 0x1Du, WPP_FxRegistryAPI_cpp_Traceguids, Key, dataLength, 0xFFFF, -1073741306);
          }
          else
          {
            *(_DWORD *)(&tmp.MaximumLength + 1) = 0;
            if ( dataLength )
            {
              tmp.Buffer = (wchar_t *)v17;
              tmp.Length = dataLength;
              tmp.MaximumLength = dataLength;
              if ( !*((_WORD *)v17 + ((unsigned __int64)(unsigned __int16)dataLength >> 1) - 1) )
                tmp.Length = dataLength - 2;
            }
            else
            {
              *(_DWORD *)&tmp.Length = 0;
              tmp.Buffer = (wchar_t *)&unk_1400B6028;
            }
            v12 = FxString::Assign(pString, &tmp);
          }
          goto LABEL_17;
        }
        v12 = -1073741788;
      }
      WPP_IFR_SF_qdd(v7, 2u, 2u, 0x1Eu, WPP_FxRegistryAPI_cpp_Traceguids, Key, dataLength, v12);
LABEL_17:
      FxPoolFree(v17);
      return (unsigned int)v12;
    }
  }
  return result;
}
