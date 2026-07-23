/*
 * XREFs of IoPageRead @ 0x1404F8A10
 * Callers:
 *     PopReadPagesFromHiberFile @ 0x140AAC0F0 (PopReadPagesFromHiberFile.c)
 * Callees:
 *     IoPageReadEx @ 0x14025C000 (IoPageReadEx.c)
 */

NTSTATUS __stdcall IoPageRead(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  char v7; // cl
  char v8; // al
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  char v11; // dl
  char v12; // al
  unsigned __int64 v13; // rdx

  v7 = 0;
  if ( ((unsigned __int8)FileObject & 3) != 0 )
  {
    v8 = (char)FileObject;
    FileObject = (PFILE_OBJECT)((unsigned __int64)FileObject & 0xFFFFFFFFFFFFFFFCuLL);
    v7 = 2 - ((v8 & 1) != 0LL);
  }
  v9 = (unsigned __int8)MemoryDescriptorList & 1;
  v10 = (unsigned __int64)MemoryDescriptorList & 0xFFFFFFFFFFFFFFFEuLL;
  if ( ((unsigned __int8)MemoryDescriptorList & 1) == 0 )
    v10 = (unsigned __int64)MemoryDescriptorList;
  v11 = v7 | 4;
  if ( !v9 )
    v11 = v7;
  v12 = v11 | 8;
  if ( (v10 & 2) == 0 )
    v12 = v11;
  v13 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v10 & 2) == 0 )
    v13 = v10;
  return IoPageReadEx(FileObject, v13, StartingOffset, (__int64)Event, (__int64)IoStatusBlock, v12, 0LL);
}
