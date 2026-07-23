/*
 * XREFs of PnpLogEvent @ 0x140720FF0
 * Callers:
 *     PnpLogDuplicateDevice @ 0x140721FA4 (PnpLogDuplicateDevice.c)
 *     PpBootDDBHelper @ 0x1407228FC (PpBootDDBHelper.c)
 *     PpCheckInDriverDatabase @ 0x1409B89D4 (PpCheckInDriverDatabase.c)
 *     PiInitializeDDB @ 0x1409B8DD4 (PiInitializeDDB.c)
 *     PiIsDriverBlocked @ 0x1409BA914 (PiIsDriverBlocked.c)
 *     PnpQueryDeviceID @ 0x140A27FC0 (PnpQueryDeviceID.c)
 *     PnpQueryID @ 0x140A28110 (PnpQueryID.c)
 *     PnpFixupID @ 0x140A2830C (PnpFixupID.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     IoWriteErrorLogEntry @ 0x1404A6840 (IoWriteErrorLogEntry.c)
 *     IoAllocateGenericErrorLogEntry @ 0x140593838 (IoAllocateGenericErrorLogEntry.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
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
