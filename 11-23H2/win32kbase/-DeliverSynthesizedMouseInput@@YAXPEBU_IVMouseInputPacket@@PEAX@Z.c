/*
 * XREFs of ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01ECF94
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDC20 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C009C3B0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01E7A84 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 */

void __fastcall DeliverSynthesizedMouseInput(const struct _IVMouseInputPacket *a1, void *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // r14
  __int64 v6; // rax
  struct InputVirtualization::RootSynthesizedMouseList *v7; // rdi
  _WORD *v8; // rcx
  __int64 v9; // r8
  _WORD *v10; // rdx
  __int16 v11; // ax
  struct InputVirtualization::RootSynthesizedMouseList *Instance; // rsi
  struct InputVirtualization::RootSynthesizedMouseList **v13; // rax

  v2 = *((_DWORD *)a1 + 8);
  v4 = *((_QWORD *)a1 + 3);
  v6 = Win32AllocPoolZInit((int)(28 * v2) + 36LL, 0x736D5649u);
  v7 = (struct InputVirtualization::RootSynthesizedMouseList *)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 16) = a2;
    *(_DWORD *)(v6 + 32) = v2;
    *(_QWORD *)(v6 + 24) = *((_QWORD *)a1 + 6);
    if ( v2 )
    {
      v8 = (_WORD *)(v4 + 8);
      v9 = v2;
      v10 = (_WORD *)(v6 + 40);
      do
      {
        *(v10 - 2) = *(v8 - 4);
        *(v10 - 1) = *(v8 - 2);
        v11 = *v8;
        v8 += 24;
        *v10 = v11;
        v10 += 14;
        *(v10 - 13) = *(v8 - 22);
        *((_DWORD *)v10 - 6) = *((_DWORD *)v8 - 10);
        *((_DWORD *)v10 - 5) = *((_DWORD *)v8 - 9);
        *((_DWORD *)v10 - 4) = *((_DWORD *)v8 - 8);
        *((_DWORD *)v10 - 3) = *((_DWORD *)v8 - 7);
        *((_DWORD *)v10 - 2) = *((_DWORD *)v8 - 4);
        --v9;
      }
      while ( v9 );
    }
    Instance = InputVirtualization::RootSynthesizedMouseList::GetInstance();
    CPushLock::AcquireLockExclusive((struct InputVirtualization::RootSynthesizedMouseList *)((char *)Instance + 16));
    v13 = (struct InputVirtualization::RootSynthesizedMouseList **)*((_QWORD *)Instance + 1);
    if ( *v13 != Instance )
      __fastfail(3u);
    *(_QWORD *)v7 = Instance;
    *((_QWORD *)v7 + 1) = v13;
    *v13 = v7;
    *((_QWORD *)Instance + 1) = v7;
    KeSetEvent((PRKEVENT)gpevtSynthesizedContainerMouseInput, 1, 0);
    CPushLock::ReleaseLock((struct InputVirtualization::RootSynthesizedMouseList *)((char *)Instance + 16));
  }
}
