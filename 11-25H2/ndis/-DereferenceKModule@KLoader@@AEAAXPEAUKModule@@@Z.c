/*
 * XREFs of ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x140174030
 * Callers:
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140141150 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MO.c)
 *     ?DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140155A6C (-DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z.c)
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x140155D78 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_D @ 0x14006D370 (WPP_RECORDER_SF_D_ea_14006D370.c)
 *     ??_GKModule@@QEAAPEAXI@Z @ 0x1400E3E94 (--_GKModule@@QEAAPEAXI@Z.c)
 */

void __fastcall KLoader::DereferenceKModule(KLoader *this, struct KModule *a2)
{
  KModule *v2; // rbx
  int v4; // esi
  int v5; // esi
  KModule *v6; // rcx
  KModule **v7; // rax
  char v8[8]; // [rsp+28h] [rbp-10h]
  char v9; // [rsp+28h] [rbp-10h]

  v2 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
  v4 = *((_DWORD *)v2 + 4);
  if ( !v4 )
    NT_ASSERT("Module->ReferenceCount > 0");
  v5 = v4 - 1;
  *((_DWORD *)v2 + 4) = v5;
  if ( !v5 )
  {
    v6 = *(KModule **)v2;
    if ( *(KModule **)(*(_QWORD *)v2 + 8LL) != v2 || (v7 = (KModule **)*((_QWORD *)v2 + 1), *v7 != v2) )
      __fastfail(3u);
    *v7 = v6;
    *((_QWORD *)v6 + 1) = v7;
    KModule::`scalar deleting destructor'(v2, 0);
    ExFreePoolWithTag(v2, 0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v5;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Eu,
      (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
      *(_QWORD *)v8);
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
