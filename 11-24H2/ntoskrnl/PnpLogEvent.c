/*
 * XREFs of PnpLogEvent @ 0x140723460
 * Callers:
 *     PnpLogDuplicateDevice @ 0x140724414 (PnpLogDuplicateDevice.c)
 *     PpBootDDBHelper @ 0x140724D6C (PpBootDDBHelper.c)
 *     PiIsDriverBlocked @ 0x1409C6E6C (PiIsDriverBlocked.c)
 *     PiInitializeDDB @ 0x1409C7B30 (PiInitializeDDB.c)
 *     PpCheckInDriverDatabase @ 0x1409C7E2C (PpCheckInDriverDatabase.c)
 *     PnpQueryDeviceID @ 0x140A33FB0 (PnpQueryDeviceID.c)
 *     PnpQueryID @ 0x140A34100 (PnpQueryID.c)
 *     PnpFixupID @ 0x140A342FC (PnpFixupID.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     IoWriteErrorLogEntry @ 0x1404AC3E0 (IoWriteErrorLogEntry.c)
 *     IoAllocateGenericErrorLogEntry @ 0x140596858 (IoAllocateGenericErrorLogEntry.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

void __fastcall PnpLogEvent(const void **a1, const void **a2, int a3, const void *a4, unsigned int Size)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  __int64 GenericErrorLogEntry; // rax
  _WORD *v14; // rbx
  char *v15; // rdi
  char *v16; // rdi

  v9 = 0LL;
  v10 = 0LL;
  if ( a1 )
    v10 = *(unsigned __int16 *)a1 + 2LL;
  if ( a2 )
    v9 = *(unsigned __int16 *)a2 + 2LL;
  v11 = (Size + 40 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL;
  v12 = v10 + v11 + v9;
  if ( v12 <= 0xF0 )
  {
    GenericErrorLogEntry = IoAllocateGenericErrorLogEntry(v12);
    v14 = (_WORD *)GenericErrorLogEntry;
    if ( GenericErrorLogEntry )
    {
      *(_WORD *)(GenericErrorLogEntry + 6) = v11;
      v15 = (char *)(GenericErrorLogEntry + v11);
      *(_DWORD *)(GenericErrorLogEntry + 12) = a3;
      *(_DWORD *)(GenericErrorLogEntry + 20) = a3;
      *(_WORD *)(GenericErrorLogEntry + 2) = Size;
      if ( Size )
        memmove((void *)(GenericErrorLogEntry + 40), a4, Size);
      if ( a1 )
      {
        v14[2] = 1;
        memmove(v15, a1[1], *(unsigned __int16 *)a1);
        v16 = &v15[*(unsigned __int16 *)a1];
        *(_WORD *)v16 = 0;
        v15 = v16 + 2;
      }
      if ( a2 )
      {
        ++v14[2];
        memmove(v15, a2[1], *(unsigned __int16 *)a2);
        *(_WORD *)&v15[*(unsigned __int16 *)a2] = 0;
      }
      IoWriteErrorLogEntry(v14);
    }
  }
}
