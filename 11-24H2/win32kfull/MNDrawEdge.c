/*
 * XREFs of MNDrawEdge @ 0x14020BC9C
 * Callers:
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1402E951C (xxxMNDrawFullNC.c)
 * Callees:
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x14020BD94 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 */

void __fastcall MNDrawEdge(__int64 a1, HDC a2, _DWORD *a3, int a4)
{
  int v6; // esi
  int v8; // ebp
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  HBRUSH v12; // rcx

  v6 = a3[2] - *a3;
  v8 = a3[3] - a3[1];
  UserSessionState = W32GetUserSessionState(a1, a2);
  DrawOutline(a2, 0, 0, v6, v8, 1, *(HBRUSH *)(*(_QWORD *)(UserSessionState + 19928) + 4824LL));
  v12 = *(HBRUSH *)(*(_QWORD *)(a1 + 40) + 24LL);
  if ( !v12 )
    v12 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(0LL, v11) + 19928) + 4728LL);
  DrawOutline(a2, 1, 1, v6 - 2, v8 - 2, 2, v12);
  if ( a4 == 0x2000 )
  {
    *a3 += 3;
    a3[2] -= 3;
    a3[1] += 3;
    a3[3] -= 3;
  }
}
