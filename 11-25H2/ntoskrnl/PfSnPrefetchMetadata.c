/*
 * XREFs of PfSnPrefetchMetadata @ 0x1409C7D14
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x1409C7C94 (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     wcsncmp @ 0x1404FD850 (wcsncmp.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     NtCreateEvent @ 0x14089FF70 (NtCreateEvent.c)
 *     PfSnPrefetchFileMetadata @ 0x1408C3008 (PfSnPrefetchFileMetadata.c)
 *     PfpPrefetchEntireDirectory @ 0x1409C745C (PfpPrefetchEntireDirectory.c)
 *     PfSnLogPrefetchMetadata @ 0x1409C7744 (PfSnLogPrefetchMetadata.c)
 */

__int64 __fastcall PfSnPrefetchMetadata(__int64 a1, int a2)
{
  __int64 v2; // rsi
  int v4; // r13d
  int Event; // ebx
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
  unsigned int v27; // r15d
  __int64 v29; // xmm1_8
  __int64 v30; // rdx
  __int64 v31; // rax
  _DWORD *v32; // rdx
  __int128 v33; // [rsp+30h] [rbp-59h] BYREF
  __int64 v34; // [rsp+40h] [rbp-49h]
  _DWORD v35[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v36; // [rsp+50h] [rbp-39h]
  UNICODE_STRING *p_DestinationString; // [rsp+58h] [rbp-31h]
  int v38; // [rsp+60h] [rbp-29h]
  int v39; // [rsp+64h] [rbp-25h]
  __int128 v40; // [rsp+68h] [rbp-21h]
  __int64 v41; // [rsp+78h] [rbp-11h]
  __int64 v42; // [rsp+80h] [rbp-9h]
  __int64 v43; // [rsp+88h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v45; // [rsp+F0h] [rbp+67h]
  int v47; // [rsp+100h] [rbp+77h]
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)a1;
  v35[1] = 0;
  v39 = 0;
  v34 = 0LL;
  v42 = v2;
  Handle = 0LL;
  v4 = a2;
  DestinationString = 0LL;
  v33 = 0LL;
  PfSnLogPrefetchMetadata(v2, a2, 1);
  if ( v2 )
  {
    v35[0] = 48;
    v36 = 0LL;
    v38 = 512;
    p_DestinationString = 0LL;
    v40 = 0LL;
    Event = NtCreateEvent((unsigned __int64)&Handle, 2031619LL, (__int64)v35, NotificationEvent, 0);
    if ( Event >= 0 )
    {
      v6 = v2 + *(unsigned int *)(v2 + 108);
      v7 = 0LL;
      v43 = v6;
      v47 = 0;
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
                PfSnPrefetchFileMetadata(a1, (void *)v9[4], v6 + v10[5], *((_DWORD *)v9 + 26), v27, Handle);
                *((_DWORD *)v9 + 26) += v27;
                v14 = *(_QWORD *)(a1 + 80);
                v41 = v14;
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
                v24 = v41;
                v45 = 0;
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
                        v36 = v9[8];
                        v35[0] = 48;
                        p_DestinationString = &DestinationString;
                        v38 = 576;
                        v34 = 0LL;
                        v40 = 0LL;
                        v33 = 0LL;
                        PfpPrefetchEntireDirectory(v26, (__int64)(v9 + 4), v24, (__int64)&v33, (__int64)v35);
                        if ( (_QWORD)v33 && *(_DWORD *)(a1 + 120) < *(_DWORD *)(a1 + 124) )
                        {
                          v29 = v34;
                          v30 = 3LL * *(unsigned int *)(a1 + 120);
                          v31 = *(_QWORD *)(a1 + 112);
                          *(_OWORD *)(v31 + 8 * v30) = v33;
                          *(_QWORD *)(v31 + 8 * v30 + 16) = v29;
                          ++*(_DWORD *)(a1 + 120);
                        }
                        ++v25;
                        v20 += *v20 + 2;
                      }
                      while ( v25 < *v23 );
                      v21 = v45;
                      v22 = a2;
                    }
                  }
                  ++v21;
                  ++v23;
                  v45 = v21;
                }
                while ( v21 < 7 );
                v2 = v42;
                v8 = (__int64 **)(a1 + 40);
                v6 = v43;
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
          v7 = (unsigned int)(v47 + 1);
          v47 = v7;
        }
        while ( (unsigned int)v7 < *(_DWORD *)(v2 + 112) );
      }
      Event = 0;
    }
    if ( Handle )
      NtClose(Handle);
  }
  else
  {
    Event = -1073741811;
  }
  PfSnLogPrefetchMetadata(v2, v4, 0);
  return (unsigned int)Event;
}
