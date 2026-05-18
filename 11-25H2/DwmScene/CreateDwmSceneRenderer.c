/*
 * XREFs of CreateDwmSceneRenderer @ 0x180010570
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18000F0E4 @ 0x18000F0E4 (sub_18000F0E4.c)
 *     sub_180010080 @ 0x180010080 (sub_180010080.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall CreateDwmSceneRenderer(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v12)(_QWORD, __int64, __int64); // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    if ( !*a1 )
    {
      v6 = -2147024809;
      v7 = 21LL;
      goto LABEL_3;
    }
    if ( qword_1801C3438 )
    {
      v6 = -2147418113;
      v7 = 24LL;
      goto LABEL_3;
    }
    v12 = 0LL;
    sub_18000E854((__int64 *)&v12);
    v8 = sub_180010080((__int64 *)&v12, (__int64)a1);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v8 = (**v12)(v12, a2, a3);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v6 = 0;
        goto LABEL_14;
      }
      v9 = 31LL;
    }
    else
    {
      v9 = 29LL;
    }
    sub_18000F0E4(
      retaddr,
      v9,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\dwmsceneapi.cpp",
      (unsigned int)v8);
LABEL_14:
    sub_18000E854((__int64 *)&v12);
    return v6;
  }
  v6 = -2147467261;
  v7 = 20LL;
LABEL_3:
  sub_18000F0E4(retaddr, v7, (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\dwmsceneapi.cpp", v6);
  return v6;
}
