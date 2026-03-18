/*
 * XREFs of ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1400E0E88
 * Callers:
 *     NtUserCreateActivationObject @ 0x14012F500 (NtUserCreateActivationObject.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     UserDereferenceDwmProcess @ 0x14006F990 (UserDereferenceDwmProcess.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Create@CActivationObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAPEAV1@@Z @ 0x1400E0FAC (-Create@CActivationObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAPEAV1@@Z.c)
 *     _HMPkheFromObjectWorker @ 0x1400E1208 (_HMPkheFromObjectWorker.c)
 *     ?AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1400E123C (-AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1400E1514 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 */

__int64 __fastcall CActivationObjectManager::CreateActivationObject(
        CActivationObjectManager *this,
        __int64 a2,
        struct _OBJECT_ATTRIBUTES *a3,
        __int64 a4,
        char a5,
        HWND a6,
        unsigned __int64 a7,
        struct _LUID *a8)
{
  HWND v8; // rsi
  int v10; // edi
  __int64 v11; // rax
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // rcx
  struct _OBJECT_ATTRIBUTES *v14; // rdx
  char v15; // cl
  unsigned int v16; // r8d
  char v17; // r9
  struct CActivationObject *v18; // rsi
  struct _LUID v19; // rcx
  HWND v21; // [rsp+20h] [rbp-68h]
  unsigned __int64 v22; // [rsp+28h] [rbp-60h]
  struct CActivationObject **v23; // [rsp+30h] [rbp-58h]
  __int128 v24; // [rsp+40h] [rbp-48h] BYREF
  __int64 v25; // [rsp+50h] [rbp-38h]
  int v26; // [rsp+58h] [rbp-30h]
  __int64 v27; // [rsp+70h] [rbp-18h]
  struct CActivationObject *v28; // [rsp+A0h] [rbp+18h] BYREF

  v28 = (struct CActivationObject *)a3;
  v8 = a6;
  v10 = -1073741811;
  v11 = HMValidateHandleNoSecure((__int64)a6, 255);
  if ( v11 )
  {
    v12 = *(struct tagTHREADINFO **)(HMPkheFromObjectWorker(v11) + 8);
    if ( v12 == PtiCurrent(v13) )
    {
      v28 = 0LL;
      v10 = CActivationObject::Create(v15, v14, v16, v17, v8, a7, &v28);
      if ( v10 >= 0 )
      {
        CPushLock::AcquireLockExclusive((CActivationObjectManager *)((char *)this + 16));
        v18 = v28;
        v10 = CActivationObjectManager::AddActivationObjectToHashTable(this, v28);
        if ( v10 >= 0 )
        {
          v19 = (struct _LUID)*((_QWORD *)v18 + 5);
          v24 = 0LL;
          *a8 = v19;
          v27 = 0LL;
          v25 = 0LL;
          v26 = 0;
          CActivationObjectManager::NotifySystemSateChanged(v19, v18, 0LL, &v24, v21, v22, v23);
        }
        CPushLock::ReleaseLock((CActivationObjectManager *)((char *)this + 16));
        if ( v10 < 0 )
          UserDereferenceDwmProcess(v18);
      }
    }
  }
  return (unsigned int)v10;
}
