/*
 * XREFs of SeCaptureObjectTypeList @ 0x14041E500
 * Callers:
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureObjectTypeList(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  char *Pool2; // r9
  char *v8; // r15
  __int64 i; // rdx
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  char *v14; // rcx
  _OWORD *v15; // r9
  __int64 v16; // r10
  __int64 v17; // r11
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+24h] [rbp-64h]
  char *v21; // [rsp+28h] [rbp-60h]
  _QWORD v22[4]; // [rsp+30h] [rbp-58h]

  v22[0] = a4;
  v19 = 0;
  Pool2 = 0LL;
  *(_QWORD *)v22[0] = 0LL;
  if ( a3 != 1 )
    return 3221225474LL;
  if ( a2 )
  {
    if ( a1 )
    {
      if ( 16LL * a2 && (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      Pool2 = (char *)ExAllocatePool2(0x100uLL, 48LL * a2, 0x744F6553u);
      v21 = Pool2;
      v8 = Pool2;
      if ( Pool2 )
      {
        for ( i = 0LL; ; i = (unsigned int)(v20 + 1) )
        {
          v20 = i;
          v10 = (unsigned int)i;
          if ( (unsigned int)i >= a2 )
            break;
          v11 = (unsigned int)i;
          v12 = 2 * i;
          v13 = *(unsigned __int16 *)(a1 + 8 * v12);
          if ( (unsigned int)v13 > 4 )
            goto LABEL_24;
          v14 = &Pool2[48 * v11];
          *(_DWORD *)v14 = (unsigned __int16)v13;
          v15 = *(_OWORD **)(a1 + 8 * v12 + 8);
          if ( ((unsigned __int8)v15 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_OWORD *)(v14 + 4) = *v15;
          *((_QWORD *)v14 + 3) = 0LL;
          *((_DWORD *)v14 + 8) = 0;
          *((_QWORD *)v14 + 5) = 0LL;
          if ( v20 )
          {
            v16 = (unsigned int)v13;
            Pool2 = v21;
            if ( (unsigned int)v13 > (unsigned int)*(unsigned __int16 *)&v21[48 * (v20 - 1)] + 1 || !(_WORD)v13 )
              goto LABEL_24;
          }
          else
          {
            if ( (_WORD)v13 )
            {
              v19 = -1073741811;
              Pool2 = v21;
              break;
            }
            v16 = (unsigned int)v13;
            Pool2 = v21;
          }
          v17 = 6 * v10;
          if ( (_WORD)v13 )
            *(_DWORD *)&v8[8 * v17 + 20] = *((_DWORD *)v22 + v16 + 1);
          else
            *(_DWORD *)&v8[8 * v17 + 20] = -1;
          *((_DWORD *)&v22[1] + v13) = v20;
        }
      }
      else
      {
        v19 = -1073741670;
      }
    }
    else
    {
LABEL_24:
      v19 = -1073741811;
    }
  }
  if ( v19 < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    *a4 = Pool2;
  }
  return (unsigned int)v19;
}
