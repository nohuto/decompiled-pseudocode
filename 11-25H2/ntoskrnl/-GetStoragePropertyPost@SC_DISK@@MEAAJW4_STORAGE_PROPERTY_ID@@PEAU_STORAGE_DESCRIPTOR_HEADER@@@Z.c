/*
 * XREFs of ?GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140692410
 * Callers:
 *     <none>
 * Callees:
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140691EC0 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140701E20 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1408E08C0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_DISK::GetStoragePropertyPost(
        struct _UNICODE_STRING *this,
        int a2,
        struct _STORAGE_DESCRIPTOR_HEADER *a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int Buffer_high; // ecx
  unsigned int Size; // eax
  int v9; // edx
  int v10; // edx
  int v11; // edx
  char *v12; // rax
  char *v13; // rsi
  unsigned int Version; // edx

  v4 = 0;
  if ( a2 > 14 )
  {
    v9 = a2 - 21;
    if ( v9 )
    {
      v10 = v9 - 36;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 7 )
          {
            v12 = (char *)SC_ENV::Allocate(a3[1].Version + 1, 5u, (unsigned __int8)a3, a4);
            v13 = v12;
            if ( v12 )
            {
              memmove(v12, &a3[1].Size, a3[1].Version);
              v4 = ScAnsiToUnicodeString(v13, this + 18);
              PspUserApcKernelRoutine(v13);
            }
            else
            {
              return (unsigned int)-1073741670;
            }
          }
        }
        else
        {
          Version = a3[4].Version;
          if ( Version < a3->Version || Version > a3->Size - 1 )
            a3[4].Version = 0;
        }
      }
    }
  }
  else if ( a2 == 6 )
  {
    Buffer_high = HIDWORD(this[14].Buffer);
    if ( a3[2].Version != Buffer_high )
      return (unsigned int)-1073739509;
    Size = a3[2].Size;
    if ( Size < Buffer_high || Size % Buffer_high )
      return (unsigned int)-1073739509;
  }
  return v4;
}
