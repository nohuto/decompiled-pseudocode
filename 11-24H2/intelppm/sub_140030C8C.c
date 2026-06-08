/*
 * XREFs of sub_140030C8C @ 0x140030C8C
 * Callers:
 *     sub_140030B50 @ 0x140030B50 (sub_140030B50.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140030E90 @ 0x140030E90 (sub_140030E90.c)
 *     sub_140037C28 @ 0x140037C28 (sub_140037C28.c)
 *     sub_14003E4A0 @ 0x14003E4A0 (sub_14003E4A0.c)
 */

__int64 __fastcall sub_140030C8C(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *Pool2; // rsi
  int v4; // ebx
  __int64 v5; // rbp
  unsigned int v6; // eax
  __int64 v7; // r9
  _DWORD *v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-30h]
  _DWORD v14[2]; // [rsp+40h] [rbp-18h] BYREF
  _DWORD *v15; // [rsp+48h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 544);
  if ( v1 && *(_DWORD *)(v1 + 16) )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 520LL, 1919119952LL);
    if ( Pool2 )
    {
      v5 = 0LL;
      v14[1] = *(_DWORD *)(a1 + 48);
      v14[0] = 82;
      v15 = Pool2;
      for ( *Pool2 = 1; (unsigned int)v5 < *(_DWORD *)(v1 + 16); v5 = (unsigned int)(v5 + 1) )
      {
        v6 = Pool2[1];
        if ( v6 >= 0x10 )
          break;
        v7 = 80 * v5;
        v8 = &Pool2[8 * v6 + 2];
        if ( (*(_DWORD *)(80 * v5 + v1 + 32) & 1) != 0 )
        {
          v9 = v5 + 1;
          if ( (unsigned int)v5 >= 3 )
            v9 = 3;
          v8[2] = v9;
          v10 = *(_DWORD *)(v7 + v1 + 28);
          v8[4] = 0;
          v8[3] = v10;
          v8[6] = *(_DWORD *)(v7 + v1 + 24);
          if ( (int)sub_14003E4A0(a1, (int)v7 + (int)v1 + 48, -1, *(_DWORD *)(v7 + v1 + 36), (__int64)v8, 0LL, 0LL, 0LL) < 0 )
            _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80000u);
          else
            ++Pool2[1];
        }
      }
      if ( Pool2[1] )
      {
        if ( qword_1400194C8 )
          v11 = qword_1400194C8(v14);
        else
          v11 = -1073741822;
        v4 = 0;
        if ( v11 != -1073741637 )
          v4 = v11;
        if ( v4 >= 0 )
        {
          v4 = sub_140030E90(a1);
          if ( v4 >= 0 )
          {
            if ( !*(_BYTE *)(a1 + 720) )
            {
              *(_BYTE *)(a1 + 720) = 1;
              sub_140037C28(a1);
            }
            v4 = 0;
          }
        }
        else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LODWORD(v13) = v4;
          sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0xEu, (__int64)&unk_1400145F8, v13);
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
