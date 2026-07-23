/*
 * XREFs of SmpDirtyStoreCreate @ 0x140A3854C
 * Callers:
 *     SmpSystemStoreCreate @ 0x140799964 (SmpSystemStoreCreate.c)
 *     SmpKeyedStoreCreate @ 0x140A383F4 (SmpKeyedStoreCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SmProcessCreateRequest @ 0x140A38664 (SmProcessCreateRequest.c)
 */

__int64 __fastcall SmpDirtyStoreCreate(struct _SM_PARTITION *a1, unsigned int a2, int a3, _DWORD *a4)
{
  __int64 v4; // rbp
  int v8; // ecx
  int v9; // edx
  bool v10; // zf
  unsigned __int64 v11; // rax
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-90h]
  int v15; // [rsp+2Ch] [rbp-8Ch]
  int v16; // [rsp+30h] [rbp-88h]
  int v17; // [rsp+34h] [rbp-84h]
  int v18; // [rsp+70h] [rbp-48h]

  v4 = a2;
  memset_0(&v13, 0, 0x58uLL);
  v8 = *((_DWORD *)a1 + 556);
  v15 = 128;
  v16 = 0x20000;
  v13 = ((a3 & 1) << 9) | 0x106;
  v9 = 0;
  if ( a3 )
    v10 = (v8 & 0xC) == 8;
  else
    v10 = (v8 & 3) == 2;
  LOBYTE(v9) = v10;
  v11 = (8 * v4) & 0x7FFFFFFFFFFFLL;
  v14 = v14 & 0xFF0AFF00 | ((v8 & 0x2000 | (4 * (v8 & 0x700 | 0x20))) << 10) & 0xFFFAFFFF | (((16 * v9) | v8 & 0x40) << 12);
  if ( v11 >= 0x40000 )
    LODWORD(v11) = 0x40000;
  v17 = v11;
  result = SmProcessCreateRequest(a1);
  if ( (int)result >= 0 )
  {
    *a4 = v18;
    return 0LL;
  }
  return result;
}
