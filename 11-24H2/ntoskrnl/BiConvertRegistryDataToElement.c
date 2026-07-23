/*
 * XREFs of BiConvertRegistryDataToElement @ 0x1409A5CA8
 * Callers:
 *     BcdGetElementDataWithFlags @ 0x1409A4E5C (BcdGetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     BiResolveLocateDevice @ 0x140812B7C (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToElement @ 0x140812EC0 (BiConvertBootEnvironmentDeviceToElement.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertRegistryDataToElement(
        HANDLE BcdObjectHandle,
        const WCHAR *SourceString,
        size_t Size,
        unsigned int a4,
        __int16 a5,
        GUID *Guid,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  unsigned int v8; // r13d
  unsigned int v9; // edi
  PCWSTR v10; // r15
  unsigned int v12; // esi
  char v13; // r12
  __int64 v14; // rbx
  GUID *v15; // rdi
  int v16; // ebx
  __int64 v17; // rax
  unsigned int v18; // ecx
  GUID *v20; // r12
  GUID *v21; // rcx
  GUID *v22; // rcx
  unsigned int *v23; // rdi
  __int64 v24; // rdx
  GUID *v25; // rbx
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  size_t Sizea; // [rsp+98h] [rbp+48h] BYREF

  v7 = a7;
  v8 = 0;
  v9 = Size;
  P = 0LL;
  LODWORD(Sizea) = 0;
  v10 = SourceString;
  v12 = 0;
  DestinationString = 0LL;
  if ( (HIBYTE(a4) & 0xF) == 1 )
  {
    if ( (unsigned int)Size < 0x1C || *((unsigned int *)SourceString + 6) + 16LL != (unsigned int)Size )
      goto LABEL_28;
    v16 = BiConvertBootEnvironmentDeviceToElement((void *)(SourceString + 8), a4, a5, (__int64)&P, (__int64)&Sizea);
    if ( v16 < 0 )
    {
      v12 = Sizea;
      goto LABEL_18;
    }
    v23 = (unsigned int *)P;
    if ( *(_DWORD *)P == 8 )
    {
      if ( (a5 & 0x100) != 0 )
      {
        BiLogMessage();
      }
      else if ( (int)BiResolveLocateDevice(BcdObjectHandle, P) >= 0 )
      {
        v24 = v23[6];
        v12 = Sizea - v24;
        memmove(v23, (char *)v23 + v24, (unsigned int)(Sizea - v24));
        goto LABEL_65;
      }
    }
    v12 = Sizea;
LABEL_65:
    if ( v12 > *v7 )
    {
      v16 = -1073741789;
      ExFreePoolWithTag(v23, 0x4B444342u);
      goto LABEL_11;
    }
    v25 = Guid;
    memmove(Guid, v23, v12);
    *(GUID *)&v25->Data2 = *(GUID *)v10;
    ExFreePoolWithTag(v23, 0x4B444342u);
    goto LABEL_10;
  }
  if ( (HIBYTE(a4) & 0xF) == 2 )
  {
    if ( (_DWORD)Size && (Size & 1) == 0 )
    {
      v13 = 0;
      v12 = Size;
      v14 = (unsigned int)Size;
      if ( *(const WCHAR *)((char *)SourceString + (unsigned int)Size - 2) )
      {
        v9 = Size + 2;
        v13 = 1;
        v12 = Size + 2;
      }
      if ( v9 <= *a7 )
      {
        v15 = Guid;
        memmove(Guid, SourceString, (unsigned int)Size);
        if ( v13 )
          *(_WORD *)((char *)&v15->Data1 + v14) = 0;
        goto LABEL_10;
      }
LABEL_41:
      v16 = -1073741789;
      goto LABEL_11;
    }
    goto LABEL_28;
  }
  if ( (HIBYTE(a4) & 0xF) != 3 )
  {
    if ( (HIBYTE(a4) & 0xF) == 4 )
    {
      v20 = Guid;
      v18 = 0;
      LODWORD(Sizea) = 0;
      v16 = 0;
      if ( (unsigned int)Size >= 2 && (Size & 1) == 0 )
      {
        SourceString[((unsigned __int64)(unsigned int)Size >> 1) - 1] = 0;
        if ( *SourceString )
        {
          do
          {
            if ( v18 >= v9 )
              break;
            v8 += 16;
            v12 = v8;
            if ( v8 <= *v7 )
            {
              RtlInitUnicodeString(&DestinationString, v10);
              v16 = RtlGUIDFromString(&DestinationString, v20);
              if ( v16 < 0 )
                goto LABEL_18;
              v18 = Sizea;
              ++v20;
            }
            v17 = -1LL;
            do
              ++v17;
            while ( v10[v17] );
            v18 += 2 * v17 + 2;
            LODWORD(Sizea) = v18;
            v10 += (unsigned int)(v17 + 1);
          }
          while ( *v10 );
        }
        if ( v12 > *v7 )
          v16 = -1073741789;
        goto LABEL_11;
      }
      goto LABEL_28;
    }
    if ( (HIBYTE(a4) & 0xF) == 5 )
    {
      v12 = 8;
      if ( (unsigned int)Size > 8 )
        goto LABEL_28;
      if ( *a7 < 8 )
        goto LABEL_41;
      v21 = Guid;
      *(_QWORD *)&Guid->Data1 = 0LL;
    }
    else
    {
      if ( (HIBYTE(a4) & 0xF) == 6 )
      {
        if ( (_DWORD)Size != 1 )
          goto LABEL_28;
        v12 = 2;
        if ( *a7 < 2 )
          goto LABEL_41;
        v22 = Guid;
        BYTE1(Guid->Data1) = 0;
        LOBYTE(v22->Data1) = *(_BYTE *)SourceString != 0;
        goto LABEL_10;
      }
      if ( (HIBYTE(a4) & 0xF) == 7 )
      {
        if ( !(_DWORD)Size || (Size & 7) != 0 )
          goto LABEL_28;
        v12 = Size;
        if ( *a7 < (unsigned int)Size )
          goto LABEL_41;
      }
      else
      {
        if ( !(_DWORD)Size )
          goto LABEL_28;
        v12 = Size;
        if ( (unsigned int)Size > *a7 )
          goto LABEL_41;
      }
      v21 = Guid;
    }
    memmove(v21, SourceString, (unsigned int)Size);
    goto LABEL_10;
  }
  v12 = 16;
  if ( *a7 < 0x10 )
    goto LABEL_41;
  if ( (unsigned int)Size < 2 || (Size & 1) != 0 )
  {
LABEL_28:
    BiLogMessage();
    return (unsigned int)-1073741788;
  }
  SourceString[((unsigned __int64)(unsigned int)Size >> 1) - 1] = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v16 = RtlGUIDFromString(&DestinationString, Guid);
  if ( v16 < 0 )
  {
LABEL_18:
    if ( v16 != -1073741789 )
      return (unsigned int)v16;
    goto LABEL_11;
  }
LABEL_10:
  v16 = 0;
LABEL_11:
  *v7 = v12;
  return (unsigned int)v16;
}
