/*
 * XREFs of LdrEnumResources @ 0x180138150
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1800D8280 (LdrpCompareResourceNamesWithValidation.c)
 */

NTSTATUS __cdecl LdrEnumResources(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        ULONG *ResourceCount,
        PLDR_ENUM_RESOURCE_ENTRY Resources)
{
  ULONG v6; // r15d
  PLDR_RESOURCE_INFO v7; // r13
  char *v8; // rax
  __int64 v9; // rbx
  unsigned int *v11; // r14
  unsigned int v12; // edi
  unsigned int v13; // ecx
  const wchar_t *Type; // r8
  __int64 v15; // rax
  __int64 v16; // rsi
  ULONG_PTR v17; // rsi
  unsigned int *v18; // rbp
  unsigned int v19; // ecx
  unsigned int v20; // eax
  const wchar_t *Name; // r8
  __int64 v22; // rax
  __int64 v23; // rdi
  ULONG_PTR v24; // rdi
  unsigned int *v25; // r15
  unsigned int v26; // ecx
  unsigned int i; // r13d
  __int64 v28; // rcx
  ULONG_PTR v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  PLDR_ENUM_RESOURCE_ENTRY v32; // r9
  ULONG v33; // [rsp+30h] [rbp-68h]
  ULONG v34; // [rsp+34h] [rbp-64h]
  unsigned int v35; // [rsp+38h] [rbp-60h]
  unsigned int v36; // [rsp+3Ch] [rbp-5Ch]
  NTSTATUS v37; // [rsp+40h] [rbp-58h]
  unsigned int v38; // [rsp+44h] [rbp-54h]
  unsigned int v39; // [rsp+48h] [rbp-50h]
  unsigned int v40; // [rsp+4Ch] [rbp-4Ch]
  ULONG Size; // [rsp+B8h] [rbp+20h] BYREF

  v6 = Level;
  v7 = ResourceInfo;
  v33 = 0;
  if ( Resources )
    v34 = *ResourceCount;
  else
    v34 = 0;
  *ResourceCount = 0;
  v8 = (char *)RtlImageDirectoryEntryToData(DllHandle, 1u, 2u, &Size);
  v9 = (__int64)v8;
  if ( !v8 )
    return -1073741687;
  v11 = (unsigned int *)(v8 + 16);
  v12 = 0;
  v13 = *((unsigned __int16 *)v8 + 6) + *((unsigned __int16 *)v8 + 7);
  v37 = 0;
  v40 = v13;
  while ( 1 )
  {
    v36 = v12;
    if ( v12 >= v13 )
      break;
    if ( !v6
      || (Type = (const wchar_t *)v7->Type,
          LOBYTE(Size) = 0,
          !(unsigned int)LdrpCompareResourceNamesWithValidation(0LL, 0LL, Type, v9, v11, &Size)) )
    {
      v15 = v11[1];
      if ( (int)v15 >= 0 )
        return -1073741701;
      v16 = *v11;
      if ( (int)v16 >= 0 )
      {
        v17 = *(unsigned __int16 *)v11;
      }
      else
      {
        LODWORD(v16) = v16 & 0x7FFFFFFF;
        v17 = v9 + v16;
      }
      LODWORD(v15) = v15 & 0x7FFFFFFF;
      v18 = (unsigned int *)(v15 + v9 + 16);
      v19 = *(unsigned __int16 *)(v15 + v9 + 12) + *(unsigned __int16 *)(v15 + v9 + 14);
      v39 = v19;
      v20 = 0;
      while ( 1 )
      {
        v35 = v20;
        if ( v20 >= v19 )
          break;
        if ( v6 <= 1
          || (Name = (const wchar_t *)v7->Name,
              LOBYTE(Size) = 0,
              !(unsigned int)LdrpCompareResourceNamesWithValidation(0LL, 0LL, Name, v9, v18, &Size)) )
        {
          v22 = v18[1];
          if ( (int)v22 >= 0 )
            return -1073741701;
          v23 = *v18;
          if ( (int)v23 >= 0 )
          {
            v24 = *(unsigned __int16 *)v18;
          }
          else
          {
            LODWORD(v23) = v23 & 0x7FFFFFFF;
            v24 = v9 + v23;
          }
          LODWORD(v22) = v22 & 0x7FFFFFFF;
          v25 = (unsigned int *)(v22 + v9 + 16);
          v26 = *(unsigned __int16 *)(v22 + v9 + 12) + *(unsigned __int16 *)(v22 + v9 + 14);
          v38 = v26;
          for ( i = 0; i < v26; ++i )
          {
            if ( Level <= 2
              || (LOBYTE(Size) = 0,
                  !(unsigned int)LdrpCompareResourceNamesWithValidation(
                                   0LL,
                                   0LL,
                                   (const wchar_t *)ResourceInfo->Language,
                                   v9,
                                   v25,
                                   &Size)) )
            {
              if ( (v25[1] & 0x80000000) != 0 )
                return -1073741701;
              v28 = *v25;
              if ( (int)v28 >= 0 )
              {
                v29 = *(unsigned __int16 *)v25;
              }
              else
              {
                LODWORD(v28) = v28 & 0x7FFFFFFF;
                v29 = v9 + v28;
              }
              v30 = v25[1];
              v31 = v33++;
              if ( v33 > v34 )
              {
                v37 = -1073741820;
              }
              else
              {
                v32 = Resources;
                Resources[v31].Path[0].NameOrId = v17;
                v32[v31].Path[1].NameOrId = v24;
                v32[v31].Path[2].NameOrId = v29;
                v32[v31].Data = (char *)DllHandle + *(unsigned int *)(v30 + v9);
                *(_QWORD *)&v32[v31].Size = *(unsigned int *)(v30 + v9 + 4);
              }
            }
            v26 = v38;
            v25 += 2;
          }
          v6 = Level;
          v7 = ResourceInfo;
        }
        v19 = v39;
        v20 = v35 + 1;
        v18 += 2;
      }
      v12 = v36;
    }
    v13 = v40;
    ++v12;
    v11 += 2;
  }
  *ResourceCount = v33;
  return v37;
}
