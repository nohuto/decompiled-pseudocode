/*
 * XREFs of ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x14018FCB4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x140194164 (-UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z.c)
 */

void __fastcall DXGADAPTER::InitializeDriverDiagnosticReporting(DXGADAPTER *this)
{
  struct DXGGLOBAL *Global; // rsi
  __int64 v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-10h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  *(_QWORD *)((char *)this + 4812) = 0LL;
  *(_QWORD *)((char *)this + 4820) = -1LL;
  v3 = 0LL;
  v4 = 0LL;
  while ( (unsigned int)v3 < 2 )
  {
    DWORD1(v4) = *((_DWORD *)Global + v3 + 76215);
    if ( DWORD1(v4) )
    {
      if ( (_DWORD)v3 )
      {
        LODWORD(v4) = v4 | 2;
        DWORD2(v4) |= 0xFFFFFFFE;
      }
      else
      {
        LODWORD(v4) = v4 | 1;
        DWORD2(v4) |= 0xFFFFFFFC;
      }
      HIDWORD(v4) = v3;
      DXGADAPTER::UpdateDiagnosticReporting(this, (struct DXGADAPTER::_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING *)&v4);
    }
    v3 = (unsigned int)(v3 + 1);
  }
}
