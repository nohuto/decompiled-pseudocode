/*
 * XREFs of ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x140021EE0
 * Callers:
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x140020CB0 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x140009EBC (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14000C23C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1400DF584 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GdiUpdateSpriteDevLockEnd(struct XDCOBJ *a1)
{
  HDEV HDEV; // r15
  struct _GRETHREAD *CurrentThread; // rax
  struct _GRETHREAD *v4; // rbx
  unsigned __int8 v5; // r12
  int v7; // esi
  struct _RECTL v8; // xmm0
  unsigned int i; // r14d
  struct _RECTL *v10; // r8
  unsigned __int8 v11; // [rsp+30h] [rbp-D0h]
  struct REGION *v12; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  HDEV v14; // [rsp+48h] [rbp-B8h] BYREF
  struct _RECTL v15; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[4]; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v17; // [rsp+64h] [rbp-9Ch]
  char v18; // [rsp+74h] [rbp-8Ch]
  unsigned int v19; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v20[20]; // [rsp+104h] [rbp+4h] BYREF

  HDEV = (HDEV)UserGetHDEV();
  if ( !(unsigned int)GreGetBounds(**(_QWORD **)a1, &v15, 4LL) )
  {
LABEL_9:
    v13 = *(_QWORD *)(*(_QWORD *)a1 + 1184LL);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
    *(_QWORD *)(*(_QWORD *)a1 + 1184LL) = 0LL;
    return 0LL;
  }
  v14 = HDEV;
  if ( ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v14);
    CurrentThread = GreGetCurrentThread();
    v4 = CurrentThread;
    if ( CurrentThread )
    {
      v5 = *((_BYTE *)CurrentThread + 344);
      *((_DWORD *)CurrentThread + 86) &= ~1u;
    }
    else
    {
      v5 = v11;
    }
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v13, (struct PDEVOBJ *)&v14);
    v12 = *(struct REGION **)(*(_QWORD *)a1 + 1184LL);
    if ( !v12 )
    {
      bSpUpdateSpriteDevLockEnd(HDEV, a1, &v15);
      goto LABEL_7;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v12) == 1 )
      goto LABEL_7;
    RGNOBJ::bOffset(
      (RGNOBJ *)&v12,
      (const struct _POINTL *)(*(_QWORD *)a1 + 8 * ((*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) + 127LL)));
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v16);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v16, v12, (const struct ERECTL *)&v15, 1);
    memset_0(&v19, 0, 0x144uLL);
    if ( v18 )
    {
      if ( v18 != 1 )
      {
        if ( v18 == 3 )
        {
          v7 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v16, 0, 0, 4u, 0x14u);
LABEL_20:
          if ( !v7 )
            goto LABEL_22;
          do
          {
            v7 = XCLIPOBJ::bEnum((XCLIPOBJ *)v16, 0x144u, (char *)&v19, 0LL);
LABEL_22:
            for ( i = 0; i < v19; ++i )
            {
              v10 = (struct _RECTL *)&v20[i];
              if ( v10->left < v15.left )
                v10->left = v15.left;
              if ( v10->right > v15.right )
                v10->right = v15.right;
              if ( v10->top < v15.top )
                v10->top = v15.top;
              if ( v10->bottom > v15.bottom )
                v10->bottom = v15.bottom;
              bSpUpdateSpriteDevLockEnd(HDEV, a1, v10);
            }
          }
          while ( v7 );
        }
LABEL_7:
        SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v13);
        if ( v4 )
          *((_DWORD *)v4 + 86) ^= ((unsigned __int8)*((_DWORD *)v4 + 86) ^ v5) & 1;
        goto LABEL_9;
      }
      v8 = v17;
    }
    else
    {
      v8 = v15;
    }
    v20[0] = v8;
    v19 = 1;
    v7 = 0;
    goto LABEL_20;
  }
  return 0LL;
}
