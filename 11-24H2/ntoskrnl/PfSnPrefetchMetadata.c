/*
 * XREFs of PfSnPrefetchMetadata @ 0x140937DF4
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x140937D74 (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     wcsncmp @ 0x1404FD890 (wcsncmp.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     PfpPrefetchEntireDirectory @ 0x14093753C (PfpPrefetchEntireDirectory.c)
 *     PfSnLogPrefetchMetadata @ 0x140937824 (PfSnLogPrefetchMetadata.c)
 *     PfSnPrefetchFileMetadata @ 0x140954694 (PfSnPrefetchFileMetadata.c)
 */

__int64 __fastcall PfSnPrefetchMetadata(__int64 a1, int a2)
{
  __int64 v2; // rsi
  int v4; // r13d
  NTSTATUS v5; // ebx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 **v8; // rcx
  __int64 *v9; // rbx
  unsigned int *v10; // rdi
  const wchar_t *v11; // r15
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  _QWORD *v19; // rdx
  unsigned __int16 *v20; // r13
  unsigned int v21; // r15d
  int v22; // eax
  unsigned int *v23; // rdi
  __int64 v24; // r12
  unsigned int v25; // esi
  __int64 v26; // rcx
  int v27; // r15d
  __int64 v29; // xmm1_8
  __int64 v30; // rdx
  __int64 v31; // rax
  _DWORD *v32; // rdx
  BOOLEAN InitialState[8]; // [rsp+20h] [rbp-69h]
  __int128 v34; // [rsp+30h] [rbp-59h] BYREF
  __int64 v35; // [rsp+40h] [rbp-49h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-41h] BYREF
  __int64 v37; // [rsp+78h] [rbp-11h]
  __int64 v38; // [rsp+80h] [rbp-9h]
  __int64 v39; // [rsp+88h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v41; // [rsp+F0h] [rbp+67h]
  int v43; // [rsp+100h] [rbp+77h]
  HANDLE EventHandle; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)a1;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v35 = 0LL;
  v38 = v2;
  EventHandle = 0LL;
  v4 = a2;
  DestinationString = 0LL;
  v34 = 0LL;
  PfSnLogPrefetchMetadata(v2, a2, 1);
  if ( v2 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v5 >= 0 )
    {
      v6 = v2 + *(unsigned int *)(v2 + 108);
      v7 = 0LL;
      v39 = v6;
      v43 = 0;
      if ( *(_DWORD *)(v2 + 112) )
      {
        v8 = (__int64 **)(a1 + 40);
        do
        {
          v9 = *v8;
          v10 = (unsigned int *)(v6 + 96 * v7);
          v11 = (const wchar_t *)(v6 + *v10);
          while ( v9 != (__int64 *)v8 )
          {
            v12 = wcsncmp(v11, (const wchar_t *)v9[2], *((unsigned int *)v9 + 6));
            v13 = 0;
            if ( !v12 && !v11[*((unsigned int *)v9 + 6)] )
            {
              v27 = 0;
              if ( v9 && (*((_DWORD *)v9 + 27) & 1) != 0 )
              {
                v32 = v10 + 9;
                do
                {
                  if ( _bittest(&v4, v13) )
                    v27 += *v32 + v32[7];
                  ++v13;
                  ++v32;
                }
                while ( v13 < 7 );
                *(_DWORD *)InitialState = v27;
                PfSnPrefetchFileMetadata(
                  a1,
                  v9[4],
                  v6 + v10[5],
                  *((unsigned int *)v9 + 26),
                  *(_QWORD *)InitialState,
                  EventHandle);
                *((_DWORD *)v9 + 26) += v27;
                v14 = *(_QWORD *)(a1 + 80);
                v37 = v14;
                *(_DWORD *)v14 = 4;
                v15 = *(_DWORD *)(a1 + 96);
                v16 = *(_DWORD *)(a1 + 100) & 7 | 8;
                *(_DWORD *)(v14 + 4) = 768;
                *(_QWORD *)(v14 + 8) = v15 & 7 | (unsigned __int64)(unsigned int)(8 * v16);
                v18 = 0;
                v19 = (_QWORD *)(v14 + 16);
                do
                {
                  v17 = v18++;
                  *v19++ = v17 << 12;
                }
                while ( v18 < 0x300 );
                v20 = (unsigned __int16 *)v9[12];
                v21 = 0;
                v22 = a2;
                v23 = v10 + 16;
                v24 = v37;
                v41 = 0;
                do
                {
                  if ( _bittest(&v22, v21) )
                  {
                    v25 = 0;
                    if ( *v23 )
                    {
                      do
                      {
                        RtlInitUnicodeString(&DestinationString, &v20[*((unsigned int *)v9 + 6) + 2]);
                        v26 = *(_QWORD *)(a1 + 8);
                        ObjectAttributes.RootDirectory = (HANDLE)v9[8];
                        ObjectAttributes.Length = 48;
                        ObjectAttributes.ObjectName = &DestinationString;
                        ObjectAttributes.Attributes = 576;
                        v35 = 0LL;
                        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                        v34 = 0LL;
                        PfpPrefetchEntireDirectory(
                          v26,
                          (__int64)(v9 + 4),
                          v24,
                          (__int64)&v34,
                          (__int64)&ObjectAttributes);
                        if ( (_QWORD)v34 && *(_DWORD *)(a1 + 120) < *(_DWORD *)(a1 + 124) )
                        {
                          v29 = v35;
                          v30 = 3LL * *(unsigned int *)(a1 + 120);
                          v31 = *(_QWORD *)(a1 + 112);
                          *(_OWORD *)(v31 + 8 * v30) = v34;
                          *(_QWORD *)(v31 + 8 * v30 + 16) = v29;
                          ++*(_DWORD *)(a1 + 120);
                        }
                        ++v25;
                        v20 += *v20 + 2;
                      }
                      while ( v25 < *v23 );
                      v21 = v41;
                      v22 = a2;
                    }
                  }
                  ++v21;
                  ++v23;
                  v41 = v21;
                }
                while ( v21 < 7 );
                v2 = v38;
                v8 = (__int64 **)(a1 + 40);
                v6 = v39;
                v9[12] = (__int64)v20;
                v4 = a2;
              }
              else
              {
                v8 = (__int64 **)(a1 + 40);
              }
              break;
            }
            v9 = (__int64 *)*v9;
            v8 = (__int64 **)(a1 + 40);
          }
          v7 = (unsigned int)(v43 + 1);
          v43 = v7;
        }
        while ( (unsigned int)v7 < *(_DWORD *)(v2 + 112) );
      }
      v5 = 0;
    }
    if ( EventHandle )
      NtClose(EventHandle);
  }
  else
  {
    v5 = -1073741811;
  }
  PfSnLogPrefetchMetadata(v2, v4, 0);
  return (unsigned int)v5;
}
