/*
 * XREFs of ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x1401820FC
 * Callers:
 *     ?VmBusSendReleaseKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_K2@Z @ 0x140181FC8 (-VmBusSendReleaseKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 *     ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1402F9700 (-VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403A1F60 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::GetHostHandle(DXGKEYEDMUTEX *this, int a2)
{
  struct _KTHREAD **v2; // rsi
  unsigned int v5; // edi
  __int64 **v6; // rbx
  __int64 *i; // rax

  v2 = (struct _KTHREAD **)((char *)this + 112);
  v5 = 0;
  DXGFASTMUTEX::Acquire((DXGKEYEDMUTEX *)((char *)this + 112));
  v6 = (__int64 **)((char *)this + 40);
  for ( i = *v6; i != (__int64 *)v6; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
    {
      v5 = *((_DWORD *)i + 5);
      break;
    }
  }
  DXGFASTMUTEX::Release(v2);
  return v5;
}
