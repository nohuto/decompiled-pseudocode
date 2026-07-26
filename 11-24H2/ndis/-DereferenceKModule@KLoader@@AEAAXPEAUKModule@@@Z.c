/*
 * XREFs of ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x1401675C0
 * Callers:
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140136100 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MO.c)
 *     ?DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x14014AD9C (-DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z.c)
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x14014B0A8 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     ??_GKModule@@QEAAPEAXI@Z @ 0x1400DCC84 (--_GKModule@@QEAAPEAXI@Z.c)
 */

void __fastcall KLoader::DereferenceKModule(KLoader *this, struct KModule *a2)
{
  KModule *v2; // rbx
  int v4; // edx
  int v5; // esi
  int v6; // esi
  KModule *v7; // rcx
  KModule **v8; // rax
  char v9; // [rsp+28h] [rbp-10h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      29,
      (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
      v9);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v5 = *((_DWORD *)v2 + 4);
  if ( !v5 )
    NT_ASSERT("Module->ReferenceCount > 0");
  v6 = v5 - 1;
  *((_DWORD *)v2 + 4) = v6;
  if ( !v6 )
  {
    v7 = *(KModule **)v2;
    if ( *(KModule **)(*(_QWORD *)v2 + 8LL) != v2 || (v8 = (KModule **)*((_QWORD *)v2 + 1), *v8 != v2) )
      __fastfail(3u);
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
    KModule::`scalar deleting destructor'(v2, 0);
    ExFreePoolWithTag(v2, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      1,
      30,
      (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
      v6);
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
