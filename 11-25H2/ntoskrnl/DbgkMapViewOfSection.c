/*
 * XREFs of DbgkMapViewOfSection @ 0x1408FD08C
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     MiMapViewOfSectionExCommon @ 0x1408FBCB8 (MiMapViewOfSectionExCommon.c)
 *     NtMapViewOfSection @ 0x1408FC1C0 (NtMapViewOfSection.c)
 *     NtLoadEnclaveData @ 0x1409CAD50 (NtLoadEnclaveData.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     DbgkpSendApiMessage @ 0x140A60270 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140A7F280 (DbgkpSectionToFileHandle.c)
 *     DbgkpSuppressDbgMsg @ 0x140AA5400 (DbgkpSuppressDbgMsg.c)
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
