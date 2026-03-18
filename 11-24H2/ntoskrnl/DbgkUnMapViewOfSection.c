/*
 * XREFs of DbgkUnMapViewOfSection @ 0x1408E5EFC
 * Callers:
 *     MiFreeEnclaveModules @ 0x1406F8CB8 (MiFreeEnclaveModules.c)
 *     MmFreeVirtualMemory @ 0x1408DB8A0 (MmFreeVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     DbgkpSendApiMessage @ 0x14093A238 (DbgkpSendApiMessage.c)
 *     DbgkpSuppressDbgMsg @ 0x140AAABC0 (DbgkpSuppressDbgMsg.c)
 */

__int64 __fastcall DbgkUnMapViewOfSection(_KPROCESS *Object, __int64 a2)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdx
  struct _KTHREAD *v6; // rcx
  void *Teb; // rcx
  _DWORD v8[12]; // [rsp+20h] [rbp-128h] BYREF
  __int64 v9; // [rsp+50h] [rbp-F8h]

  memset_0(v8, 0, 0x110uLL);
  result = (__int64)KeGetCurrentThread();
  if ( *(_BYTE *)(result + 562) )
  {
    CurrentThread = KeGetCurrentThread();
    result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 2);
    if ( (result & 4) == 0 )
    {
      if ( Object[1].UserTime )
      {
        v6 = KeGetCurrentThread();
        if ( (v6->MiscFlags & 0x400) != 0
          || v6->ApcStateIndex == 1
          || (Teb = v6->Teb) == 0LL
          || Object != CurrentThread->Process
          || (result = DbgkpSuppressDbgMsg(Teb), !(_DWORD)result) )
        {
          v9 = a2;
          v8[0] = 3670032;
          v8[1] = 8;
          v8[10] = 6;
          return DbgkpSendApiMessage(Object);
        }
      }
    }
  }
  return result;
}
