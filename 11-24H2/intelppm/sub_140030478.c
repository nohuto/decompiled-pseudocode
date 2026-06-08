/*
 * XREFs of sub_140030478 @ 0x140030478
 * Callers:
 *     sub_140030B50 @ 0x140030B50 (sub_140030B50.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14003E448 @ 0x14003E448 (sub_14003E448.c)
 */

__int64 __fastcall sub_140030478(__int64 a1)
{
  __int64 v1; // rsi
  char *Pool2; // rdi
  int v4; // ebx
  unsigned __int8 v5; // r14
  unsigned int v6; // edx
  unsigned int i; // ebx
  char v8; // cl
  __int64 j; // r8
  char v10; // cl
  char *v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  char *v16; // [rsp+38h] [rbp-50h]
  __int128 v17; // [rsp+40h] [rbp-48h] BYREF
  int v18; // [rsp+50h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 528);
  v18 = 0;
  v17 = 0LL;
  if ( v1 && *(_DWORD *)v1 )
  {
    Pool2 = (char *)ExAllocatePool2(64LL, 520LL, 1919119952LL);
    if ( Pool2 )
    {
      v5 = 1;
      HIDWORD(v15) = *(_DWORD *)(a1 + 48);
      LODWORD(v15) = 82;
      v16 = Pool2;
      *(_DWORD *)Pool2 = 1;
      if ( *(_BYTE *)(v1 + 16) != 1 )
      {
        *(_QWORD *)(Pool2 + 20) = 0LL;
        *((_DWORD *)Pool2 + 4) = 1;
        *((_DWORD *)Pool2 + 8) = 0;
        LOBYTE(v17) = 127;
        BYTE12(v17) = 1;
        HIWORD(v17) = 0;
        v18 = 0;
        sub_14003E448(a1, (unsigned int)&v17, (_DWORD)Pool2 + 8, 0, 0LL);
        ++*((_DWORD *)Pool2 + 1);
      }
      v6 = *(_DWORD *)v1;
      for ( i = 0; i < *(_DWORD *)v1; ++v5 )
      {
        if ( v5 > 3u || *((_DWORD *)Pool2 + 1) >= 0x10u )
          break;
        v8 = *(_BYTE *)(v1 + 20LL * i + 16);
        if ( (unsigned __int8)v8 > 3u )
          v8 = 3;
        if ( v8 == v5 )
        {
          for ( j = i + 1; (unsigned int)j < v6; j = (unsigned int)(j + 1) )
          {
            v10 = *(_BYTE *)(v1 + 20 * j + 16);
            if ( (unsigned __int8)v10 > 3u )
              v10 = 3;
            if ( v10 != v5 || *(_DWORD *)(v1 + 20 * j + 20) >= *(_DWORD *)(v1 + 20 * (i + 1LL)) )
              break;
            ++i;
          }
          v11 = &Pool2[32 * *((unsigned int *)Pool2 + 1) + 8];
          *((_DWORD *)v11 + 2) = v5;
          v12 = v1 + 4 * (i + 4LL * i + 1);
          *((_DWORD *)v11 + 3) = *(unsigned __int16 *)(v12 + 14);
          *((_DWORD *)v11 + 4) = *(_DWORD *)(v12 + 16);
          if ( (int)sub_14003E448(a1, v12, (_DWORD)v11, 0, 0LL) < 0 )
            _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
          else
            ++*((_DWORD *)Pool2 + 1);
        }
        else
        {
          --i;
        }
        v6 = *(_DWORD *)v1;
        ++i;
      }
      if ( *((_DWORD *)Pool2 + 1) )
      {
        if ( qword_1400194C8 )
          v13 = qword_1400194C8(&v15);
        else
          v13 = -1073741822;
        v4 = 0;
        if ( v13 != -1073741637 )
          v4 = v13;
        if ( v4 >= 0 )
        {
          v4 = 0;
        }
        else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0xDu, (__int64)&unk_1400145F8, v4, v15, v16);
        }
      }
      else
      {
        v4 = -1073741823;
      }
      ExFreePoolWithTag(Pool2, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v4;
}
