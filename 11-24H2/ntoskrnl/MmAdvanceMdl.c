/*
 * XREFs of MmAdvanceMdl @ 0x14066FFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmAdvanceMdl(PMDL Mdl, ULONG NumberOfBytes)
{
  PVOID *p_StartVa; // rsi
  CSHORT *p_MdlFlags; // r9
  unsigned int v6; // ebx
  ULONG ByteOffset; // edi
  __int64 ByteCount; // r10
  unsigned __int64 v9; // r11
  __int16 v10; // cx
  __int64 v11; // rax
  PVOID *v12; // rdi
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r10
  struct _MDL *Next; // rsi
  PMDL v17; // rcx
  unsigned int v18; // r9d
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  CSHORT MdlFlags; // ax

  if ( NumberOfBytes >= Mdl->ByteCount )
    return -1073741584;
  p_StartVa = &Mdl->StartVa;
  p_MdlFlags = &Mdl->MdlFlags;
  v6 = 0;
  byte_140E3745C = 1;
  ByteOffset = Mdl->ByteOffset;
  ByteCount = Mdl->ByteCount;
  v9 = (((ByteOffset + LODWORD(Mdl->StartVa)) & 0xFFFuLL) + ByteCount + 4095) >> 12;
  if ( !ByteOffset )
  {
    v12 = &Mdl->StartVa;
LABEL_11:
    if ( NumberOfBytes )
    {
      Mdl->ByteCount = ByteCount - NumberOfBytes;
      Mdl->ByteOffset = NumberOfBytes & 0xFFF;
      v6 += NumberOfBytes >> 12;
      *v12 = (char *)*p_StartVa + 4096 * (unsigned __int64)(NumberOfBytes >> 12);
      if ( (*(_BYTE *)p_MdlFlags & 1) != 0 )
        Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + NumberOfBytes;
    }
    if ( v6 )
    {
      if ( (*p_MdlFlags & 0x200) != 0 )
      {
        v13 = (__int64 *)(&Mdl[1].Next + v9);
        do
        {
          v14 = *v13;
          ++v9;
          ++v13;
        }
        while ( v14 >= 0 );
      }
      v15 = v6;
      do
      {
        Next = Mdl[1].Next;
        v17 = Mdl + 1;
        if ( v9 )
        {
          v18 = 1;
          do
          {
            v19 = v18;
            if ( v18 == v9 )
              v20 = (unsigned __int64)Next | 0x8000000000000000uLL;
            else
              v20 = *(_QWORD *)&v17->Size & 0x7FFFFFFFFFFFFFFFLL;
            v17->Next = (struct _MDL *)v20;
            ++v18;
            v17 = (PMDL)((char *)v17 + 8);
          }
          while ( v19 < v9 );
        }
        --v15;
      }
      while ( v15 );
      MdlFlags = Mdl->MdlFlags;
      if ( (MdlFlags & 0x200) == 0 )
        Mdl->MdlFlags = MdlFlags | 0x200;
    }
    return 0;
  }
  v10 = *p_MdlFlags & 1;
  v11 = 4096 - ByteOffset;
  if ( NumberOfBytes >= (unsigned int)v11 )
  {
    *p_StartVa = (char *)*p_StartVa + 4096;
    LODWORD(ByteCount) = ByteCount - v11;
    NumberOfBytes -= v11;
    *(_QWORD *)&Mdl->ByteCount = (unsigned int)ByteCount;
    v12 = p_StartVa;
    if ( v10 )
    {
      Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + v11;
      v12 = &Mdl->StartVa;
    }
    v6 = 1;
    goto LABEL_11;
  }
  Mdl->ByteCount = ByteCount - NumberOfBytes;
  Mdl->ByteOffset = ByteOffset + NumberOfBytes;
  if ( v10 )
    Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + NumberOfBytes;
  return 0;
}
