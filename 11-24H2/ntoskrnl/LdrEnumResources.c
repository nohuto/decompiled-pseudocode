/*
 * XREFs of LdrEnumResources @ 0x14077E2A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x14046EA24 (LdrpCompareResourceNamesWithValidation.c)
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
  unsigned __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned int *v12; // r14
  unsigned int v13; // edi
  __int64 v14; // rcx
  const wchar_t *Type; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  ULONG_PTR v18; // rsi
  unsigned int *v19; // rbp
  __int64 v20; // rcx
  unsigned int v21; // eax
  const wchar_t *Name; // r8
  __int64 v23; // rax
  __int64 v24; // rdi
  ULONG_PTR v25; // rdi
  unsigned int *v26; // r15
  __int64 v27; // rcx
  unsigned int i; // r13d
  __int64 v29; // rax
  __int64 v30; // rcx
  ULONG_PTR v31; // rcx
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
  v10 = (__int64)v8;
  if ( !v8 )
    return -1073741687;
  v12 = (unsigned int *)(v8 + 16);
  v13 = 0;
  v14 = *((unsigned __int16 *)v8 + 6) + (unsigned int)*((unsigned __int16 *)v8 + 7);
  v37 = 0;
  v40 = *((unsigned __int16 *)v8 + 6) + *((unsigned __int16 *)v8 + 7);
  while ( 1 )
  {
    v36 = v13;
    if ( v13 >= (unsigned int)v14 )
      break;
    if ( !v6
      || (Type = (const wchar_t *)v7->Type,
          LOBYTE(Size) = 0,
          !(unsigned int)LdrpCompareResourceNamesWithValidation(v14, v9 * 5, Type, v10, v12, &Size)) )
    {
      v16 = v12[1];
      if ( (int)v16 >= 0 )
        return -1073741701;
      v17 = *v12;
      if ( (int)v17 >= 0 )
      {
        v18 = *(unsigned __int16 *)v12;
      }
      else
      {
        LODWORD(v17) = v17 & 0x7FFFFFFF;
        v18 = v10 + v17;
      }
      LODWORD(v16) = v16 & 0x7FFFFFFF;
      v19 = (unsigned int *)(v16 + v10 + 16);
      v20 = *(unsigned __int16 *)(v16 + v10 + 12) + (unsigned int)*(unsigned __int16 *)(v16 + v10 + 14);
      v39 = *(unsigned __int16 *)(v16 + v10 + 12) + *(unsigned __int16 *)(v16 + v10 + 14);
      v21 = 0;
      while ( 1 )
      {
        v35 = v21;
        if ( v21 >= (unsigned int)v20 )
          break;
        if ( v6 <= 1
          || (Name = (const wchar_t *)v7->Name,
              LOBYTE(Size) = 0,
              !(unsigned int)LdrpCompareResourceNamesWithValidation(v20, v9 * 5, Name, v10, v19, &Size)) )
        {
          v23 = v19[1];
          if ( (int)v23 >= 0 )
            return -1073741701;
          v24 = *v19;
          if ( (int)v24 >= 0 )
          {
            v25 = *(unsigned __int16 *)v19;
          }
          else
          {
            LODWORD(v24) = v24 & 0x7FFFFFFF;
            v25 = v10 + v24;
          }
          LODWORD(v23) = v23 & 0x7FFFFFFF;
          v26 = (unsigned int *)(v23 + v10 + 16);
          v27 = *(unsigned __int16 *)(v23 + v10 + 12) + (unsigned int)*(unsigned __int16 *)(v23 + v10 + 14);
          v38 = *(unsigned __int16 *)(v23 + v10 + 12) + *(unsigned __int16 *)(v23 + v10 + 14);
          for ( i = 0; i < (unsigned int)v27; ++i )
          {
            if ( Level <= 2
              || (LOBYTE(Size) = 0,
                  !(unsigned int)LdrpCompareResourceNamesWithValidation(
                                   v27,
                                   v9 * 5,
                                   (const wchar_t *)ResourceInfo->Language,
                                   v10,
                                   v26,
                                   &Size)) )
            {
              v29 = v26[1];
              if ( (int)v29 < 0 )
                return -1073741701;
              v30 = *v26;
              if ( (int)v30 >= 0 )
              {
                v31 = *(unsigned __int16 *)v26;
              }
              else
              {
                LODWORD(v30) = v30 & 0x7FFFFFFF;
                v31 = v10 + v30;
              }
              v9 = v33++;
              if ( v33 > v34 )
              {
                v37 = -1073741820;
              }
              else
              {
                v32 = Resources;
                Resources[v9].Path[0].NameOrId = v18;
                v32[v9].Path[1].NameOrId = v25;
                v32[v9].Path[2].NameOrId = v31;
                v32[v9].Data = (char *)DllHandle + *(unsigned int *)(v29 + v10);
                *(_QWORD *)&v32[v9].Size = *(unsigned int *)(v29 + v10 + 4);
              }
            }
            v27 = v38;
            v26 += 2;
          }
          v6 = Level;
          v7 = ResourceInfo;
        }
        v20 = v39;
        v21 = v35 + 1;
        v19 += 2;
      }
      v13 = v36;
    }
    v14 = v40;
    ++v13;
    v12 += 2;
  }
  *ResourceCount = v33;
  return v37;
}
