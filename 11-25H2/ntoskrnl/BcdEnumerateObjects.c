/*
 * XREFs of BcdEnumerateObjects @ 0x1408023A4
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x140784A64 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x1404A9F20 (BiIsOfflineHandle.c)
 *     BiIsEnumerateMatch @ 0x140802830 (BiIsEnumerateMatch.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
 *     BiGetObjectDescription @ 0x14096A86C (BiGetObjectDescription.c)
 *     BiEnumerateSubKeys @ 0x140A2720C (BiEnumerateSubKeys.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl BcdEnumerateObjects(
        HANDLE BcdStoreHandle,
        PBCD_OBJECT_DESCRIPTION BcdEnumDescriptor,
        PVOID Buffer,
        PULONG BufferSize,
        PULONG ObjectCount)
{
  PULONG v5; // r12
  char *v6; // r14
  __int64 v8; // rcx
  char v9; // r15
  NTSTATUS result; // eax
  PCWSTR *v11; // rdi
  __int64 v12; // rcx
  NTSTATUS v13; // ebx
  int v14; // eax
  ULONG v15; // r15d
  __int64 v16; // r12
  PCWSTR *v17; // rsi
  int ObjectDescription; // ebx
  unsigned __int64 v19; // rax
  unsigned int v20; // esi
  ULONG v21; // r14d
  unsigned int v22; // r12d
  int v23; // ebx
  char *v24; // r8
  __int64 v25; // rax
  char v26; // [rsp+20h] [rbp-50h]
  unsigned int v27; // [rsp+24h] [rbp-4Ch] BYREF
  __int64 v28; // [rsp+28h] [rbp-48h] BYREF
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  PCWSTR *v30; // [rsp+38h] [rbp-38h] BYREF
  __int64 v31; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-28h]
  char *v33; // [rsp+50h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  GUID *Guid; // [rsp+C0h] [rbp+50h]

  Guid = (GUID *)Buffer;
  v31 = 0LL;
  v5 = BufferSize;
  v28 = 0LL;
  v6 = (char *)Buffer;
  v27 = 0;
  DestinationString = 0LL;
  if ( !Buffer && *BufferSize || !ObjectCount || !BcdEnumDescriptor->Version )
    return -1073741811;
  LOBYTE(v8) = BiIsOfflineHandle((char)BcdStoreHandle);
  v26 = v8;
  v9 = v8;
  result = BiAcquireBcdSyncMutant(v8);
  if ( result >= 0 )
  {
    v29 = 0LL;
    v30 = 0LL;
    v11 = 0LL;
    v13 = BiOpenKey(BcdStoreHandle, L"Objects", 131097LL, &v29);
    if ( v13 >= 0 )
    {
      v14 = BiEnumerateSubKeys(v29, &v30, &v27);
      v11 = v30;
      v13 = v14;
      if ( v14 >= 0 )
      {
        v15 = 0;
        if ( v27 )
        {
          v16 = v27;
          v17 = v30;
          do
          {
            if ( (int)BiOpenKey(v29, *v17, 131097LL, &v28) >= 0 )
            {
              ObjectDescription = BiGetObjectDescription(v28, &v31);
              BiCloseKey(v28);
              if ( ObjectDescription >= 0 )
              {
                if ( (unsigned __int8)BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v31)) )
                  ++v15;
              }
            }
            ++v17;
            --v16;
          }
          while ( v16 );
          v5 = BufferSize;
          v6 = (char *)Guid;
        }
        v19 = 24LL * v15;
        if ( v19 > 0xFFFFFFFF
          || (v12 = ((_DWORD)v19 + 7) & 0xFFFFFFF8, v33 = &v6[v12], 8 * (unsigned __int64)v15 > 0xFFFFFFFF)
          || (v20 = v12 + ((8 * v15 + 7) & 0xFFFFFFF8), v20 < (unsigned int)v12) )
        {
          v13 = -1073741675;
        }
        else if ( v20 <= *v5 )
        {
          v32 = 0;
          v21 = 0;
          if ( v27 )
          {
            v22 = v32;
            LODWORD(v30) = v12 + ((8 * v15 + 7) & 0xFFFFFFF8);
            do
            {
              if ( v21 >= v15 )
                break;
              if ( (int)BiOpenKey(v29, v11[v22], 131097LL, &v28) >= 0 )
              {
                v23 = BiGetObjectDescription(v28, &v31);
                BiCloseKey(v28);
                if ( v23 >= 0 )
                {
                  if ( (unsigned __int8)BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v31)) )
                  {
                    RtlInitUnicodeString(&DestinationString, v11[v22]);
                    if ( RtlGUIDFromString(&DestinationString, Guid) >= 0 )
                    {
                      v24 = v33;
                      v25 = v31;
                      *(_QWORD *)&Guid[1].Data1 = v33;
                      Guid = (GUID *)((char *)Guid + 24);
                      *(_QWORD *)v24 = v25;
                      v33 = v24 + 8;
                      ++v21;
                    }
                  }
                }
              }
              ++v22;
            }
            while ( v22 < v27 );
            v20 = (unsigned int)v30;
            v5 = BufferSize;
          }
          v13 = 0;
          *v5 = v20;
          *ObjectCount = v21;
        }
        else
        {
          v13 = -1073741789;
          *v5 = v20;
          *ObjectCount = v15;
        }
        v9 = v26;
      }
    }
    if ( v29 )
      BiCloseKey(v29);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x4B444342u);
    LOBYTE(v12) = v9;
    BiReleaseBcdSyncMutant(v12);
    return v13;
  }
  return result;
}
