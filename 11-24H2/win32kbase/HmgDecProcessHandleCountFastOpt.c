/*
 * XREFs of HmgDecProcessHandleCountFastOpt @ 0x1401C4E28
 * Callers:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x140032060 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgDecProcessHandleCount @ 0x140084620 (HmgDecProcessHandleCount.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1400BA7E0 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C1930 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall HmgDecProcessHandleCountFastOpt(_QWORD *a1, int a2)
{
  struct _W32PROCESS *W32ProcessFromId; // rbx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF
  HSEMAPHORE v5; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 && a2 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(a2, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      SEMOBJ<20>::SEMOBJ<20>(&v5, a1);
      --*((_DWORD *)W32ProcessFromId + 15);
      SEMOBJ<20>::vUnlock(&v5);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
}
