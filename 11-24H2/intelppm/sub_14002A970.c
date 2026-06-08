/*
 * XREFs of sub_14002A970 @ 0x14002A970
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_1400060CC @ 0x1400060CC (sub_1400060CC.c)
 *     sub_14000748C @ 0x14000748C (sub_14000748C.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010270 @ 0x140010270 (sub_140010270.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_1400292EC @ 0x1400292EC (sub_1400292EC.c)
 *     sub_140029368 @ 0x140029368 (sub_140029368.c)
 */

__int64 __fastcall sub_14002A970(__int64 a1)
{
  int v1; // edx
  int v2; // ebx
  bool v3; // di
  char v4; // bl
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp-38h]
  unsigned __int64 v11; // [rsp+30h] [rbp-38h]
  unsigned __int64 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+38h] [rbp-30h] BYREF
  __int128 v14; // [rsp+48h] [rbp-20h] BYREF

  if ( sub_1400060CC(a1) )
  {
    BYTE6(DeviceObject.Queue.Wcb.CurrentIrp) = sub_1400292EC();
    v3 = 0;
    v13 = 0LL;
    v14 = 0LL;
    sub_140010270(0, &v13);
    v4 = 1;
    if ( (unsigned int)v13 >= 6 )
    {
      sub_140010270(6u, &v14);
      v3 = (v14 & 0x8180) == 33152;
    }
    BYTE5(DeviceObject.Queue.Wcb.CurrentIrp) = v3;
    if ( !sub_140029368() || !sub_14000748C() )
      v4 = 0;
    HIBYTE(DeviceObject.Queue.Wcb.CurrentIrp) = v4;
    if ( *(_WORD *)((char *)&DeviceObject.Queue.Wcb.CurrentIrp + 5) )
    {
      v6 = __readmsr(0x773u);
      v10 = v6;
      if ( BYTE6(DeviceObject.Queue.Wcb.CurrentIrp) )
      {
        LODWORD(v6) = v6 & 0xFFFFFFFC;
        LODWORD(v10) = v6;
      }
      if ( BYTE5(DeviceObject.Queue.Wcb.CurrentIrp) )
        LODWORD(v10) = v6 & 0xFFFFFFFB;
      __writemsr(0x773u, v10);
      v7 = __readmsr(0x777u);
      v11 = v7;
      if ( BYTE6(DeviceObject.Queue.Wcb.CurrentIrp) )
      {
        LODWORD(v7) = v7 & 0xFFFFFFFA;
        LODWORD(v11) = v7;
      }
      if ( BYTE5(DeviceObject.Queue.Wcb.CurrentIrp) )
        LODWORD(v11) = v7 & 0xFFFFFFF7;
      v5 = HIDWORD(v11);
      __writemsr(0x777u, v11);
    }
    if ( v4 )
    {
      v12 = __readmsr(0x1B2u) & 0xFFFFFFFFFDFFFFFFuLL;
      v5 = HIDWORD(v12);
      __writemsr(0x1B2u, v12);
    }
    v2 = ((__int64 (__fastcall *)(char (__fastcall *)(__int64, __int64, __int64), unsigned __int64))HalPrivateDispatchTable[117])(
           sub_140005020,
           v5);
    if ( v2 >= 0 )
    {
      if ( HIBYTE(DeviceObject.Queue.Wcb.CurrentIrp) )
      {
        v8 = __readmsr(0x1B1u);
        if ( (v8 & 0x4000000) != 0 )
        {
          if ( qword_140019AB8 )
            qword_140019AB8(433LL);
        }
      }
      return 0;
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0xEu, (__int64)&unk_1400138E0, v2);
    }
  }
  else
  {
    v2 = -1073741637;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v1) = 4;
      sub_140003D28(off_140018050->DeviceExtension, v1, 3, 13, (__int64)&unk_1400138E0);
    }
  }
  return (unsigned int)v2;
}
