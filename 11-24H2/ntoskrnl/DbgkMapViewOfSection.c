/*
 * XREFs of DbgkMapViewOfSection @ 0x140897F08
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     NtMapViewOfSection @ 0x140899970 (NtMapViewOfSection.c)
 *     NtLoadEnclaveData @ 0x1408D9D70 (NtLoadEnclaveData.c)
 *     MiMapViewOfSectionExCommon @ 0x14099F100 (MiMapViewOfSectionExCommon.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     DbgkpSendApiMessage @ 0x14093A238 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140A83008 (DbgkpSectionToFileHandle.c)
 *     DbgkpSuppressDbgMsg @ 0x140AAABC0 (DbgkpSuppressDbgMsg.c)
 */

int __fastcall DbgkMapViewOfSection(
        _KPROCESS *Object,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rcx
  struct _KTHREAD *v12; // rbx
  char *Teb; // rbx
  unsigned __int64 v14; // rcx
  _DWORD v16[12]; // [rsp+30h] [rbp-138h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-108h]
  unsigned __int64 v18; // [rsp+68h] [rbp-100h]
  int v19; // [rsp+70h] [rbp-F8h]
  int v20; // [rsp+74h] [rbp-F4h]
  char *v21; // [rsp+78h] [rbp-F0h]

  memset_0(v16, 0, 0x110uLL);
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    v11 = KeGetCurrentThread();
    LODWORD(CurrentThread) = *((_DWORD *)&v11[1].SwapListEntry + 2);
    if ( ((unsigned __int8)CurrentThread & 4) == 0 )
    {
      if ( Object[1].UserTime )
      {
        v12 = KeGetCurrentThread();
        if ( (v12->MiscFlags & 0x400) != 0 || v12->ApcStateIndex == 1 )
          Teb = 0LL;
        else
          Teb = (char *)v12->Teb;
        if ( Teb && Object == v11->Process )
        {
          LODWORD(CurrentThread) = DbgkpSuppressDbgMsg(Teb);
          if ( (_DWORD)CurrentThread )
            return (int)CurrentThread;
          v21 = Teb + 40;
        }
        if ( a2 )
          Handle = (HANDLE)DbgkpSectionToFileHandle(a2);
        else
          Handle = 0LL;
        v18 = a3;
        v19 = a6;
        v20 = a7;
        if ( a3 )
          v14 = RtlImageNtHeader(a3);
        else
          v14 = 0LL;
        if ( v14 )
        {
          v19 = *(_DWORD *)(v14 + 12);
          v20 = *(_DWORD *)(v14 + 16);
        }
        v16[0] = 5242920;
        v16[1] = 8;
        v16[10] = 5;
        LODWORD(CurrentThread) = DbgkpSendApiMessage(Object);
        if ( Handle )
          LODWORD(CurrentThread) = ObCloseHandle(Handle, 0);
      }
    }
  }
  return (int)CurrentThread;
}
