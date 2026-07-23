/*
 * XREFs of SepTokenIsOwner @ 0x1403D9F70
 * Callers:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

char __fastcall SepTokenIsOwner(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rax
  __int16 v7; // r9
  size_t v8; // r8
  unsigned __int64 v9; // rbx
  unsigned __int8 v10; // r12
  int v11; // edi
  int v12; // r13d
  const void **v13; // r15
  unsigned int v14; // ebx
  unsigned int v15; // r13d
  unsigned int i; // edi
  const void **v17; // r12
  _DWORD *v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rax
  __int16 v22; // r8
  unsigned int v23; // r9d
  unsigned __int64 v24; // rbp
  unsigned __int8 v25; // r15
  int v26; // ebx
  int v27; // r12d
  __int64 v28; // rdi
  unsigned int v29; // ebx
  unsigned int v30; // [rsp+60h] [rbp+8h]
  unsigned int v31; // [rsp+60h] [rbp+8h]
  const void **v32; // [rsp+68h] [rbp+10h]
  __int16 v33; // [rsp+70h] [rbp+18h]
  __int16 v34; // [rsp+70h] [rbp+18h]

  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    v4 = *(unsigned __int8 **)(a2 + 8);
  }
  else
  {
    v3 = *(unsigned int *)(a2 + 4);
    if ( (_DWORD)v3 )
      v4 = (unsigned __int8 *)(a2 + v3);
    else
      v4 = 0LL;
  }
  v5 = a1 + 232;
  if ( a1 != -232 && v4 )
  {
    v6 = v4[1];
    v7 = *(_WORD *)v4;
    v33 = *(_WORD *)v4;
    v8 = (unsigned int)(4 * v6 + 8);
    v30 = 4 * v6 + 8;
    v9 = *(_QWORD *)(v5 + 8LL * (v4[4 * v6 + 4] & 0xF) + 16) & *(_QWORD *)(v5
                                                                         + 8 * ((unsigned __int64)v4[4 * v6 + 4] >> 4)
                                                                         + 144);
    v10 = 0;
LABEL_7:
    if ( v9 )
    {
      LOBYTE(v11) = v9;
      while ( 1 )
      {
        if ( !(_BYTE)v11 )
        {
          v10 += 8;
          v9 >>= 8;
          goto LABEL_7;
        }
        v12 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v11);
        v13 = (const void **)(*(_QWORD *)(v5 + 8) + 16LL * (v12 + (unsigned int)v10));
        v32 = *(const void ***)(v5 + 8);
        if ( *(_WORD *)*v13 == v7 )
        {
          if ( !memcmp(v4, *v13, v8) )
          {
            v17 = v32;
            v15 = 64;
            goto LABEL_25;
          }
          v8 = v30;
          v7 = v33;
        }
        v11 = (unsigned __int8)v11 ^ (1 << v12);
      }
    }
    v14 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 > 0x40u )
    {
      v15 = 64;
      for ( i = 64; i < v14; ++i )
      {
        v17 = *(const void ***)(v5 + 8);
        v13 = &v17[2 * i];
        if ( *(_WORD *)*v13 == v7 )
        {
          if ( !memcmp(v4, *v13, v8) )
          {
LABEL_25:
            v19 = v13 + 1;
            if ( v13 == v17 && (*v19 & 0x10) == 0 || (*v19 & 4) != 0 )
            {
              if ( !*(_DWORD *)(a1 + 128) )
                return 1;
              v20 = a1 + 504;
              if ( a1 != -504 )
              {
                v21 = v4[1];
                v22 = *(_WORD *)v4;
                v34 = *(_WORD *)v4;
                v23 = 4 * v21 + 8;
                v31 = v23;
                v24 = *(_QWORD *)(v20 + 8LL * (v4[4 * v21 + 4] & 0xF) + 16) & *(_QWORD *)(v20
                                                                                        + 8
                                                                                        * ((unsigned __int64)v4[4 * v21 + 4] >> 4)
                                                                                        + 144);
                v25 = 0;
                while ( v24 )
                {
                  LOBYTE(v26) = v24;
                  while ( (_BYTE)v26 )
                  {
                    v27 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v26);
                    v28 = *(_QWORD *)(v20 + 8) + 16LL * (v27 + (unsigned int)v25);
                    if ( **(_WORD **)v28 == v22 )
                    {
                      if ( !memcmp(v4, *(const void **)v28, v23) )
                        return (*(_DWORD *)(v28 + 8) & 4) != 0;
                      v22 = v34;
                      v23 = v31;
                    }
                    v26 = (unsigned __int8)v26 ^ (1 << v27);
                  }
                  v25 += 8;
                  v24 >>= 8;
                }
                v29 = *(_DWORD *)v20;
                if ( *(_DWORD *)v20 > 0x40u )
                {
                  while ( v15 < v29 )
                  {
                    v28 = *(_QWORD *)(v20 + 8) + 16LL * v15;
                    if ( **(_WORD **)v28 == v22 )
                    {
                      if ( !memcmp(v4, *(const void **)v28, v23) )
                        return (*(_DWORD *)(v28 + 8) & 4) != 0;
                      v22 = v34;
                      v23 = v31;
                    }
                    ++v15;
                  }
                }
              }
            }
            return 0;
          }
          v8 = v30;
          v7 = v33;
        }
      }
    }
  }
  return 0;
}
