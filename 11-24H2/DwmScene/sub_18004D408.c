/*
 * XREFs of sub_18004D408 @ 0x18004D408
 * Callers:
 *     sub_18005C2CC @ 0x18005C2CC (sub_18005C2CC.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

_QWORD *__fastcall sub_18004D408(_QWORD *a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  char *v6; // rdx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  if ( a2 > 5 )
  {
    v7 = a2 - 6;
    if ( !v7 )
    {
      v6 = "Shader";
      goto LABEL_23;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v6 = "Volume";
      goto LABEL_23;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v6 = "Skinning";
      goto LABEL_23;
    }
    if ( v9 == 1 )
    {
      v6 = "LightingGlobal";
      goto LABEL_23;
    }
    goto LABEL_18;
  }
  if ( a2 == 5 )
  {
    v6 = "Debug";
    goto LABEL_23;
  }
  if ( !a2 )
  {
    v6 = "Object";
    goto LABEL_23;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v6 = "Global";
    goto LABEL_23;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = "Material";
    goto LABEL_23;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = "Lighting";
    goto LABEL_23;
  }
  if ( v5 != 1 )
  {
LABEL_18:
    v6 = "<unknown>";
    goto LABEL_23;
  }
  v6 = "View";
LABEL_23:
  std::string::string(a1, v6);
  return a1;
}
