/*
 * XREFs of ?RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180061060
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000CA28 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D99C (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpSystemDereferenceHostWithPsm(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  struct _RM_ACTIVITY_HOST *v5; // [rsp+38h] [rbp-21h] BYREF
  __int64 v6; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+7h] BYREF
  void *v9; // [rsp+70h] [rbp+17h]
  int v10; // [rsp+78h] [rbp+1Fh]
  int v11; // [rsp+7Ch] [rbp+23h]
  __int64 *v12; // [rsp+80h] [rbp+27h]
  int v13; // [rsp+88h] [rbp+2Fh]
  int v14; // [rsp+8Ch] [rbp+33h]
  struct _RM_ACTIVITY_HOST **v15; // [rsp+90h] [rbp+37h]
  int v16; // [rsp+98h] [rbp+3Fh]
  int v17; // [rsp+9Ch] [rbp+43h]

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL);
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
  {
    v4 = *((_QWORD *)a1 + 4);
    v17 = 0;
    v14 = 0;
    v6 = v4;
    v15 = &v5;
    v12 = &v6;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E8280;
    v5 = a1;
    v16 = 8;
    v13 = 8;
    EventDescriptor.Keyword = 1LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E8280;
    v9 = &unk_1800DAA0E;
    v11 = 1;
    UserData.Reserved = 2;
    v10 = 39;
    EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  (*(void (__fastcall **)(void *))(v3 + 128))(a2);
}
