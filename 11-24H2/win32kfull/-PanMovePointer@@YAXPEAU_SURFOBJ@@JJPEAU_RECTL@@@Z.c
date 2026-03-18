/*
 * XREFs of ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x140263960
 * Callers:
 *     <none>
 * Callees:
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x140263A70 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14030B2C8 (-vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall PanMovePointer(struct _SURFOBJ *a1, signed int a2, unsigned int a3, struct _RECTL *a4)
{
  DHPDEV dhpdev; // rdi
  HSEMAPHORE v9; // rbx
  void (__fastcall *v10)(_QWORD, _QWORD, _QWORD, struct _RECTL *); // rax
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // ecx

  dhpdev = a1->dhpdev;
  v9 = (HSEMAPHORE)*((_QWORD *)dhpdev + 14);
  EngAcquireSemaphore(v9);
  v10 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _RECTL *))*((_QWORD *)dhpdev + 129);
  if ( v10 && ((_DWORD)dhpdev[11] & 0x10000) != 0 )
    v10(*((_QWORD *)dhpdev + 9), (unsigned int)a2, a3, a4);
  v11 = a1->sizlBitmap.cy + a3;
  v12 = 0;
  if ( a2 < *((_DWORD *)dhpdev + 4) )
  {
    v12 = 1;
    v13 = a2 + *(_DWORD *)dhpdev;
    *((_DWORD *)dhpdev + 4) = a2;
    *((_DWORD *)dhpdev + 6) = v13;
  }
  if ( a2 > *((_DWORD *)dhpdev + 6) )
  {
    *((_DWORD *)dhpdev + 6) = a2;
    v12 = 1;
    *((_DWORD *)dhpdev + 4) = a2 - *(_DWORD *)dhpdev;
  }
  if ( v11 < *((_DWORD *)dhpdev + 5) )
  {
    v14 = *((_DWORD *)dhpdev + 1);
    v12 = 1;
    *((_DWORD *)dhpdev + 5) = v11;
    *((_DWORD *)dhpdev + 7) = v11 + v14;
  }
  if ( v11 <= *((_DWORD *)dhpdev + 7) )
  {
    if ( !v12 )
      goto LABEL_14;
  }
  else
  {
    *((_DWORD *)dhpdev + 7) = v11;
    *((_DWORD *)dhpdev + 5) = v11 - *((_DWORD *)dhpdev + 1);
  }
  vPanningUpdate((struct _PANDEV *)dhpdev, (struct _RECTL *)dhpdev + 1, 0LL);
LABEL_14:
  if ( v9 )
    EngReleaseSemaphore(v9);
  PanSynchronize(dhpdev, 0LL);
}
