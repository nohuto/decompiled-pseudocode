/*
 * XREFs of sub_14002C5F0 @ 0x14002C5F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_140035068 @ 0x140035068 (sub_140035068.c)
 */

__int64 __fastcall sub_14002C5F0(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  int v4; // ebx
  __int64 v5; // r9
  unsigned __int16 v6; // r9
  void *v7; // rdi
  unsigned int v8; // r8d
  __int64 v10; // [rsp+28h] [rbp-D8h]
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh]
  int *v13; // [rsp+48h] [rbp-B8h]
  void *v14; // [rsp+50h] [rbp-B0h]
  __int64 v15; // [rsp+58h] [rbp-A8h]
  __int64 v16; // [rsp+60h] [rbp-A0h]
  __int64 v17; // [rsp+68h] [rbp-98h]
  int v18; // [rsp+70h] [rbp-90h] BYREF
  int v19; // [rsp+74h] [rbp-8Ch]
  void *v20; // [rsp+78h] [rbp-88h]
  void (*v21)(); // [rsp+80h] [rbp-80h]
  void (*v22)(); // [rsp+88h] [rbp-78h]
  __int128 v23; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v24)(); // [rsp+A0h] [rbp-60h]
  __int128 v25; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-48h]
  __int64 v27; // [rsp+C0h] [rbp-40h]
  __int128 v28; // [rsp+C8h] [rbp-38h]
  void *v29; // [rsp+D8h] [rbp-28h]
  int v30; // [rsp+E0h] [rbp-20h] BYREF
  __int64 (__fastcall *v31)(__int64); // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v32)(__int64); // [rsp+108h] [rbp+8h]
  __int64 (*v33)(); // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v34)(struct _FILE_OBJECT *, union _CLS_LSN *, void *); // [rsp+150h] [rbp+50h]
  __int64 v35; // [rsp+1A8h] [rbp+A8h] BYREF
  char v36; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v37; // [rsp+1B8h] [rbp+B8h] BYREF

  v35 = a2;
  v19 = 0;
  v37 = 0LL;
  v15 = 0LL;
  LODWORD(v17) = 0;
  v12 = 0;
  v23 = 0LL;
  DWORD1(v25) = 0;
  sub_140010680((char *)&v30, 0, 0x90uLL);
  v32 = sub_14002C480;
  v30 = 144;
  v33 = sub_14002C5E0;
  v34 = ClfsMgmtNullAdvanceTailNotification;
  v31 = sub_1400052F0;
  (*(void (__fastcall **)(__int64, __int64, int *))(qword_140019120 + 440))(qword_140019128, a2, &v30);
  v36 = 2;
  LOBYTE(v3) = 22;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, char *, int))(qword_140019120 + 584))(
         qword_140019128,
         v35,
         sub_140004C60,
         v3,
         &v36,
         1);
  if ( v4 >= 0 )
  {
    v36 = 20;
    LOBYTE(v5) = 27;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, char *, int))(qword_140019120 + 584))(
           qword_140019128,
           v35,
           sub_140029190,
           v5,
           &v36,
           1);
    if ( v4 >= 0 )
    {
      v29 = off_140018040;
      v26 = 0LL;
      v27 = 0x100000001LL;
      v25 = 0LL;
      LODWORD(v25) = 56;
      v28 = 0LL;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int128 *, __int64 *))(qword_140019120 + 600))(
             qword_140019128,
             &v35,
             &v25,
             &v37);
      if ( v4 >= 0 )
      {
        v7 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_140019120 + 1616))(
                       qword_140019128,
                       v37,
                       off_140018040);
        v4 = sub_140035068(v7);
        if ( v4 >= 0 )
        {
          v19 = 0;
          v12 = 0;
          v15 = 0LL;
          v17 = 0LL;
          v16 = 0LL;
          v21 = guard_check_icall_nop;
          v22 = guard_check_icall_nop;
          v24 = sub_1400461B0;
          v13 = &v18;
          v14 = &unk_140013F20;
          v23 = 0LL;
          v18 = 65592;
          v20 = v7;
          v11 = 48;
          v4 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(qword_140019120 + 1824))(qword_140019128, v37, &v11);
          if ( v4 >= 0 )
          {
            v4 = (*(__int64 (__fastcall **)(__int64, __int64, void *, _QWORD))(qword_140019120 + 616))(
                   qword_140019128,
                   v37,
                   &unk_140013EB0,
                   0LL);
            if ( v4 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              v6 = 17;
              goto LABEL_19;
            }
          }
          else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            v6 = 16;
            goto LABEL_19;
          }
        }
        else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          v6 = 15;
          v8 = 3;
LABEL_20:
          LODWORD(v10) = v4;
          sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, v8, v6, (__int64)&unk_1400130B0, v10);
        }
      }
      else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v6 = 14;
        goto LABEL_19;
      }
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v6 = 13;
      goto LABEL_19;
    }
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v6 = 12;
LABEL_19:
    v8 = 4;
    goto LABEL_20;
  }
  return (unsigned int)v4;
}
