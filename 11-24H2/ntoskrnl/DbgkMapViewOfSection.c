/*
 * XREFs of DbgkMapViewOfSection @ 0x1408A05A8
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     NtMapViewOfSection @ 0x1408A2010 (NtMapViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x140987880 (MiMapViewOfSectionExCommon.c)
 *     NtLoadEnclaveData @ 0x140A29800 (NtLoadEnclaveData.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     DbgkpSendApiMessage @ 0x140A5A2C0 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140A7DB28 (DbgkpSectionToFileHandle.c)
 *     DbgkpSuppressDbgMsg @ 0x140AA5C70 (DbgkpSuppressDbgMsg.c)
 */

int __fastcall DbgkMapViewOfSection(
        _KPROCESS *Object,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rcx
  struct _KTHREAD *v12; // rbx
  char *Teb; // rbx
  PIMAGE_NT_HEADERS v14; // rcx
  _DWORD v16[12]; // [rsp+30h] [rbp-138h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-108h]
  void *v18; // [rsp+68h] [rbp-100h]
  unsigned int PointerToSymbolTable; // [rsp+70h] [rbp-F8h]
  unsigned int NumberOfSymbols; // [rsp+74h] [rbp-F4h]
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
        PointerToSymbolTable = a6;
        NumberOfSymbols = a7;
        if ( a3 )
          v14 = RtlImageNtHeader(a3);
        else
          v14 = 0LL;
        if ( v14 )
        {
          PointerToSymbolTable = v14->FileHeader.PointerToSymbolTable;
          NumberOfSymbols = v14->FileHeader.NumberOfSymbols;
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
